#include "headers/mainwindow.h"
#include "ui_mainwindow.h"
#include "consts.h"

#include <QtCore/QDateTime>
#include <QtMqtt/QMqttClient>
#include <QtWidgets/QMessageBox>
#include <QInputDialog>
#include <QDebug>

#include <crypto++/cryptlib.h>
#include <crypto++/sha.h>
#include <crypto++/hex.h>
#include <crypto++/files.h>

#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
#include <random>

using namespace Consts;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(Consts::navigation.loginPage);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(TimerTimeout())); // calls TimerTimeout on timeout

    /*!
      Create new instance of QMqttClient and set host and port values
      When CLient is disconnected call brokerDisconnect()
      When a message is recieved, create the format 'QDate +  ":" +  string' and send to message log
    */
    m_client = new QMqttClient(this);
    m_client->setHostname(ui->hostEdit->text());
    m_client->setPort(ui->portSpinBox->value());

    connect(m_client, &QMqttClient::disconnected, this, &MainWindow::brokerDisconnected);

    connect(m_client, &QMqttClient::messageReceived, this, [this](const QByteArray &message, const QMqttTopicName &topic) {
        Message m;

        std::vector<std::string> splitMessage;
        boost::split(splitMessage, message, boost::is_any_of(":"));

        if(Consts::topics.status == topic){
            updateOnlineUsers(splitMessage[0], boost::lexical_cast<bool>(splitMessage[1]));
        }
        else{
            User u;
            u.setName(splitMessage[0]);

            Channel c = getCurrentChannel();
            m.setMessageContent(QString::fromStdString(splitMessage[1]).toStdString().c_str());
            c.addMessage(m);

            ui->messageLog->insertPlainText(m.getFormattedMessage(u));
            if(u.getName() != currentUser.getName()){
                notifyUser("New Notification");
            }
        }
    });

    connect(ui->hostEdit, &QLineEdit::textChanged, m_client, &QMqttClient::setHostname);
    connect(ui->portSpinBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::setClientPort);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::brokerDisconnected()
{
    /*!
        If client is disconnected, enable the host and port input boxes and set button text to "Connect"
    */
    ui->hostEdit->setEnabled(true);
    ui->portSpinBox->setEnabled(true);
    ui->buttonConnect->setText(tr(Consts::buttons.connect.c_str()));
}

void MainWindow::setClientPort(int p)
{
    /*!
        Set client port
    */
    m_client->setPort(p);
}

void MainWindow::on_refreshButton_clicked() {
    timer->start(Consts::timer.timerDuration);
    ui->roomDropDown->clear();
    ui->channelDropDown->clear();
    ui->roomLabel->setText("no-group-selected");

    rooms.clear();
    users.clear();

    read_userConfig(currentUser.getName());

    setupUsers();
    loadAdmin();

    updateContacts();
}

void MainWindow::notifyUser(std::string message) {
    timer->start(Consts::timer.timerDuration);
    QMessageBox notification;
    notification.setText(QString::fromStdString(message));
    notification.setStandardButtons(QMessageBox::Ok);
    notification.setDefaultButton(QMessageBox::Ok);
    int ret = notification.exec();
}

void MainWindow::on_buttonConnect_clicked()
{
    /*!
        If client is disconnected, button should say "connect" and attempt to call connectToHost() and disable the button on click
        If client is connected, button should say "disconnect" and attempt to call disconnectFromHost() and enable the button on click
    */
    timer->start(Consts::timer.timerDuration);
    if (m_client->state() == QMqttClient::Disconnected) {
        ui->hostEdit->setEnabled(false);
        ui->portSpinBox->setEnabled(false);
        ui->buttonConnect->setText(tr(Consts::buttons.disconnect.c_str()));
        m_client->connectToHost();
    } else {
        ui->hostEdit->setEnabled(true);
        ui->portSpinBox->setEnabled(true);
        ui->buttonConnect->setText(tr(Consts::buttons.connect.c_str()));
        m_client->disconnectFromHost();
        //jad
    }

}

int MainWindow::getCurrentRoomIndex(){
    return ui->roomDropDown->currentIndex();
}

void MainWindow::on_addRoomButton_clicked(){
    timer->start(Consts::timer.timerDuration);
    bool ok;
    QString roomName = QInputDialog::getText(this, tr(Consts::dialogs.enterroomname.c_str()), tr(Consts::buttons.roomname.c_str()),QLineEdit::Normal, "",&ok);

    if(ok && !roomName.isEmpty()) {
        Room room;
        room.setName(roomName.toStdString().c_str());
        ui->roomDropDown->addItem(QString::fromStdString(room.getName()));

        Admin newAdmin;
        newAdmin.setName(currentUser.getName());
        room.admin = newAdmin;

        Moderator newMod;
        newMod.setName(currentUser.getName());
        room.moderators.push_back(newMod);

        rooms.push_back(room);

        updateFile(roomFilepath);
        updateFile(adminFilepath);

        for(int i = 0; i < (int)users.size(); i++){
            if(users[i].getName() == currentUser.getName()){
                users[i].subscribeToRoom(room.getName());
                //currentUser.subscribeToRoom(room.getName());
            }
        }
        updateFile(userFilepath);
    }
}

void MainWindow::on_deleteRoomButton_clicked() {
    timer->start(Consts::timer.timerDuration);
    if(ui->roomLabel->text() == Consts::dialogs.noGroup.c_str()) { notifyUser(Consts::errors.noRoomSelected); }
    else {
        int index = ui->roomDropDown->currentIndex();
        Room room = rooms[getCurrentRoomIndex()];

        ui->roomDropDown->removeItem(index);
        rooms.erase(rooms.begin() + index);

        for(int i = 0; i < (int)users.size(); i++){
            users[i].unsubscribeFromRoom(room.getName());
        }

        updateFile(roomFilepath);
        updateFile(userFilepath);
    }
}

void MainWindow::on_roomDropDown_activated(int index) {
    timer->start(Consts::timer.timerDuration);
    Room room = rooms[getCurrentRoomIndex()];
    bool isMod = false;

    ui->roomLabel->setText(ui->roomDropDown->itemText(index));
    ui->channelDropDown->clear();

    for(int i = 0; i < (int)room.channels.size(); i++) {
        ui->channelDropDown->addItem(QString::fromStdString(room.channels[i].getName()));
    }

    for (int j = 0; j < (int)room.moderators.size(); j++){
        if(room.moderators[j].getName() == currentUser.getName()) {
            isMod = true;
        }
    }

    if (isMod){
        ui->addUserButton->show();
        ui->removeUserButton->show();
        ui->addChannelButton->show();
        ui->deleteChannelButton->show();

        if (room.admin.getName() == currentUser.getName()){
            ui->addModButton->show();
            ui->removeModButton->show();
        } else {
            ui->addModButton->hide();
            ui->removeModButton->hide();
        }
    } else {
        ui->addUserButton->hide();
        ui->removeUserButton->hide();
        ui->addChannelButton->hide();
        ui->deleteChannelButton->hide();
        ui->addModButton->hide();
        ui->removeModButton->hide();
    }
}

Channel MainWindow::getCurrentChannel() {
    return rooms[getCurrentRoomIndex()].channels[ui->channelDropDown->currentIndex()];
}

void MainWindow::on_addChannelButton_clicked() {
    timer->start(Consts::timer.timerDuration);
    if(ui->roomLabel->text() == Consts::dialogs.noGroup.c_str()) { notifyUser(Consts::errors.noRoomSelected); }
    else {
        bool ok;
        QString channelName = QInputDialog::getText(this, tr(Consts::dialogs.enterChannelName.c_str()), tr(Consts::dialogs.channelName.c_str()),QLineEdit::Normal, "",&ok);

        if(ok && !channelName.isEmpty()) {
            Channel channel;
            channel.setName(channelName.toStdString().c_str());
            ui->channelDropDown->addItem(QString::fromStdString(channel.getName()));

            rooms[getCurrentRoomIndex()].channels.push_back(channel);

            updateFile(roomFilepath);
        }
    }
}

void MainWindow::on_deleteChannelButton_clicked() {
    timer->start(Consts::timer.timerDuration);
    if(ui->roomLabel->text() == Consts::dialogs.noChannel.c_str()) { notifyUser(Consts::errors.noChannelSelected); }
    else {
        int index = ui->channelDropDown->currentIndex();

        ui->channelDropDown->removeItem(index);
        rooms[getCurrentRoomIndex()].channels.erase(rooms[getCurrentRoomIndex()].channels.begin() + index);

        updateFile(roomFilepath);
    }
}

void MainWindow::on_channelDropDown_activated(int index)
{
    /*!
        Set the current topic to the currently selected option from the dropdown box
        Set the label defining the topic for the user to the text in the currently selected dropdown box
        Clear the message log
    */
    timer->start(Consts::timer.timerDuration);
    auto subscription = m_client->subscribe(ui->channelDropDown->itemText(index));
    if (!subscription) {
        QMessageBox::critical(this, QLatin1String(Consts::errors.error.c_str()), QLatin1String(Consts::errors.subscription.c_str()));
        return;
    }
    ui->channelLabel->setText(ui->channelDropDown->itemText(index));
    ui->messageLog->clear();
}

void MainWindow::updateContacts() {
    ui->contactsDropDown->clear();

    for(int i = 0; i < (int)users.size(); i++){
        if(users[i].getName() != currentUser.getName()) {
            ui->contactsDropDown->addItem(QString::fromStdString(users[i].getName()));
        }
    }
}

void MainWindow::on_onlineRadio_toggled(bool isActive) {
    timer->start(Consts::timer.timerDuration);
    for(int i = 0; i < (int)users.size(); i++){
        if(users.at(i).getName() == currentUser.getName()){
            if(isActive) {
                users[i].setOnlineStatus(true);
                currentUser.setOnlineStatus(true);
            } else {
                users[i].setOnlineStatus(false);
                currentUser.setOnlineStatus(false);
            }
        }
    }
    try {
        m_client->subscribe(Consts::topics.statusFilter);
        QString msg = QString::fromStdString(currentUser.getName() + ":" + boost::lexical_cast<std::string>(currentUser.getOnlineStatus()));

        m_client->publish(Consts::topics.status, msg.toUtf8());
    }
    catch(...){
        notifyUser(Consts::errors.somethingWrong);
    }
}

void MainWindow::updateOnlineUsers(std::string name, bool status){
    ui->onlineUserList->clear();
    ui->offlineUserList->clear();

    for(int i = 0; i < (int)users.size(); i++){
        if(users[i].getName() == name) {
            if(users[i].getOnlineStatus() != status){
                users[i].setOnlineStatus(status);
                on_onlineRadio_toggled(currentUser.getOnlineStatus());
            }

        }

        if(users[i].getOnlineStatus()) {
            ui->onlineUserList->addItem(QString::fromStdString(users[i].getName()));
        }
        else {
            ui->offlineUserList->addItem(QString::fromStdString(users[i].getName()));
        }
    }
}

void MainWindow::on_sendButton_clicked()
{
    /*!
        Publish text in input box to message log if client is successfully connected
    */
    timer->start(Consts::timer.timerDuration);
    try {
        QString msg = QString::fromStdString(currentUser.getName()) + ':' + ui->sendInput->text();

        m_client->publish(ui->channelDropDown->currentText(), msg.toUtf8());
        ui->sendInput->clear();
    }
    catch(...){
        notifyUser(Consts::errors.sendMessage);
    }
}

void MainWindow::on_addUserButton_clicked() {
    timer->start(Consts::timer.timerDuration);
    bool ok;
    bool userFound = false;
    bool userSubbed = false;

    try {
        QString userName = QInputDialog::getText(this, tr(Consts::dialogs.enterUsername.c_str()), tr(Consts::buttons.username.c_str()),QLineEdit::Normal, "",&ok);

        for (int i = 0; i < (int)users.size(); i++) {
            if(users.at(i).getName() == userName.toStdString().c_str()){
                userFound = true;
                userSubbed = users.at(i).subscribeToRoom(rooms[getCurrentRoomIndex()].getName());
            }
        }

        if (ok) {
            if (userName.isEmpty()) { notifyUser(Consts::errors.emptyUser); }
            else if (!userFound) { notifyUser(Consts::errors.userNotFound); }
            else if (!userSubbed) { notifyUser(Consts::errors.userSubscribed);}
            else {
                std::fstream configFile;
                std::vector<std::string> lineData;
                std::string line;
                std::string newConfig;

                configFile.open(userFilepath, std::ios::in);

                if(!configFile){
                }

                else {
                    while (std::getline(configFile, line)) {
                        boost::split(lineData, line, boost::is_any_of(Consts::formatting.delimiterStr));
                        if (lineData[0] == userName.toStdString().c_str()) {
                            line += Consts::formatting.delimiterStr + rooms[getCurrentRoomIndex()].getName();
                            newConfig += line + "\n";
                        } else {
                            newConfig += line + "\n";
                        }
                    }
                    configFile.close();
                }

                std::ofstream newConfigFile;
                newConfigFile.open(userFilepath);
                newConfigFile << newConfig;
                newConfigFile.close();

                rooms[getCurrentRoomIndex()].addMembers(userName.toStdString().c_str());
            }
        }
    }
    catch (...){
        notifyUser(Consts::errors.noRoomSelected);
    }
}

void MainWindow::on_removeUserButton_clicked() {
    timer->start(Consts::timer.timerDuration);
    bool ok;
    bool userFound = false;
    int userIndex;

    try {
        QString userName = QInputDialog::getText(this, tr(Consts::dialogs.enterUsername.c_str()), tr(Consts::buttons.username.c_str()),QLineEdit::Normal, "",&ok);

        for (int i = 0; i < (int)users.size(); i++) {
            if(users.at(i).getName() == userName.toStdString().c_str()){
                userFound = true;
                userIndex = i;
            }
        }
        if(ok && userFound && !userName.isEmpty()) {
            users.at(userIndex).unsubscribeFromRoom(rooms[getCurrentRoomIndex()].getName());
            rooms[getCurrentRoomIndex()].removeMember(userName.toStdString().c_str());

            updateFile(userFilepath);
        } else {
            if(!userFound) notifyUser(Consts::errors.userNotFound);
            if(userName.isEmpty()) notifyUser(Consts::errors.emptyUser);

        }
    }

    catch (...){
        notifyUser(Consts::errors.noRoomSelected);
    }
}

void MainWindow::on_addModButton_clicked() {
    timer->start(Consts::timer.timerDuration);
    bool ok;
    bool userFound = false;
    bool userMod = false;

    try {
        QString userName = QInputDialog::getText(this, tr(Consts::dialogs.enterUsername.c_str()), tr(Consts::buttons.username.c_str()),QLineEdit::Normal, "",&ok);

        for (int i = 0; i < (int)users.size(); i++) {
            if(users.at(i).getName() == userName.toStdString().c_str()){
                userFound = true;
            }
        }
        for(int i = 0; i < (int)rooms[getCurrentRoomIndex()].moderators.size(); i++){
            if(rooms[getCurrentRoomIndex()].moderators.at(i).getName() == userName.toStdString().c_str()){
                userMod = true;
            }
        }

        if(ok){
            if (userName.isEmpty()) { notifyUser(Consts::errors.emptyUser); }
            else if (!userFound) { notifyUser(Consts::errors.userNotFound); }
            else if (userMod) { notifyUser(Consts::errors.alreadyMod);}
            else{
                Moderator newMod;
                newMod.setName(userName.toStdString().c_str());
                rooms[getCurrentRoomIndex()].addMod(newMod);

                updateFile(adminFilepath);
            }
        }
    }
    catch(...){
        notifyUser(Consts::errors.noRoomSelected);
    }
}

void MainWindow::on_removeModButton_clicked() {
    timer->start(Consts::timer.timerDuration);
    bool ok;
    bool userFound = false;
    bool userMod = false;

    try {
        QString userName = QInputDialog::getText(this, tr(Consts::dialogs.enterUsername.c_str()), tr(Consts::buttons.username.c_str()),QLineEdit::Normal, "",&ok);

        for (int i = 0; i < (int)users.size(); i++) {
            if(users.at(i).getName() == userName.toStdString().c_str()){
                userFound = true;
            }
        }
        for(int i = 0; i < (int)rooms[getCurrentRoomIndex()].moderators.size(); i++){
            if(rooms[getCurrentRoomIndex()].moderators.at(i).getName() == userName.toStdString().c_str()){
                userMod = true;
            }
        }

        if(ok && userFound && userMod && !userName.isEmpty()) {
            rooms[getCurrentRoomIndex()].removeMod(userName.toStdString().c_str());
            updateFile(adminFilepath);
        } else {
            if(!userFound) notifyUser(Consts::errors.userNotFound);
            if(!userMod) notifyUser(Consts::errors.userNotMod);
            if(userName.isEmpty()) notifyUser(Consts::errors.emptyUser);
        }
    }
    catch(...){
        notifyUser(Consts::errors.noRoomSelected);
    }
}

void MainWindow::on_settingsButton_clicked()
{
    /*!
        Set index of stackedWidget to 3, take user to setting screen
    */
    timer->start(Consts::timer.timerDuration);
    ui->stackedWidget->setCurrentIndex(Consts::navigation.settingsPage);
}

void MainWindow::on_backButton_clicked()
{
    /*!
        Set index of stacked widget to 2, take user to main page
    */
    timer->start(Consts::timer.timerDuration);
    ui->stackedWidget->setCurrentIndex(Consts::navigation.mainPage);
    //jad on_onlineRadio_toggled(bool isActive)
    if (m_client->state() != QMqttClient::Disconnected) {
        on_onlineRadio_toggled(ui->onlineRadio->isChecked());
    }
    else {
        ui->onlineUserList->clear();
        ui->offlineUserList->clear();
    }
}

void MainWindow::updateFile(std::string filePath) {
    std::ofstream file (filePath);
    std::string line;

    if(file.is_open()) {
        if (filePath == userFilepath) {
            for(int i = 0; i < (int)users.size(); i++){
                line = users.at(i).getName();
                if(!line.empty()){
                    for(int j = 0; j < (int)users.at(i).rooms.size(); j++){
                        line += Consts::formatting.delimiterStr + users.at(i).rooms.at(j);
                    }
                    file << line << std::endl;
                }
            }
        }
        else if(filePath == roomFilepath) {
            for(int i = 0; i < (int)rooms.size(); i++){
                line = rooms.at(i).getName();
                for(int j = 0; j < (int)rooms.at(i).channels.size(); j++){
                    line += Consts::formatting.delimiterStr + rooms.at(i).channels.at(j).getName();
                }
                file << line << std::endl;
            }
        }
        else {
            for(int i = 0; i < (int)rooms.size(); i++){
                line = rooms.at(i).getName();
                for(int j = 0; j < (int)rooms.at(i).moderators.size(); j++){
                    line += Consts::formatting.delimiterStr + rooms.at(i).moderators.at(j).getName();
                    std::cout << line;
                }
                file << line << std::endl;
            }
        }
    }
    file.close();
}

void MainWindow::read_userConfig(std::string username)
{
    std::fstream configFile;
    std::vector<std::string> roomData;
    std::string line;

    configFile.open(userFilepath, std::ios::in);
    if(!configFile){  }
    else {
        while (std::getline(configFile, line)) {
            boost::split(roomData, line, boost::is_any_of(Consts::formatting.delimiterStr));
            if (roomData[0] == username) {
                for(int i = 1; i < (int)roomData.size(); i++){
                    Room room;
                    room.setName(roomData[i]);
                    ui->roomDropDown->addItem(QString::fromStdString(room.getName()));
                    rooms.push_back(room);

                    read_roomConfig(roomData[i]);
                }
            }

        }
        configFile.close();
    }
}

void MainWindow::read_roomConfig(std::string roomName)
{
    std::fstream roomConfigFile;
    std::vector<std::string> channelData;
    std::string line;

    roomConfigFile.open(roomFilepath, std::ios::in);
    if(roomConfigFile){
        while (std::getline(roomConfigFile, line)) {
            boost::split(channelData, line, boost::is_any_of(Consts::formatting.delimiterStr));
            if (channelData[0] == roomName) {
                for(int i = 1; i < (int)channelData.size(); i++){
                    Channel channel;
                    channel.setName(channelData[i]);
                    for(int j = 0; j < (int)rooms.size(); j++){
                        if (rooms[j].getName() == roomName) rooms[j].channels.push_back(channel);
                    }
                }
            }
        }
        roomConfigFile.close();
    } else notifyUser(Consts::errors.missingFile);
}

QString MainWindow::generateSalt() {
    std::random_device rd;
    std::uniform_int_distribution<int> dist(1000, 9999);
    std::string salt = std::to_string(dist(rd));

    return QString::fromStdString(salt);
}

QString MainWindow::getHashedPassword(QString salt, QString password){
    CryptoPP::SHA256 hash;

    std::string saltedPassword = (salt + password).toStdString().c_str() + Consts::hashData.pepper;

    byte digest[hash.DIGESTSIZE];
    hash.CalculateDigest(digest, (const byte*)saltedPassword.c_str(), saltedPassword.length());

    CryptoPP::HexEncoder encoder;
    std::string hashedPassword;

    encoder.Attach(new CryptoPP::StringSink(hashedPassword));
    encoder.Put(digest, sizeof(digest));
    encoder.MessageEnd();

    return QString::fromStdString(hashedPassword);
}

void MainWindow::on_loginButton_clicked()
{
    /*!
        Checks a user's credentials against the credentials.txt file and verifies
        whether they have an account on the platform or not

        If their username and password combination are a match they are logged into the application
    */
    std::fstream credentialsFile;
    credentialsFile.open(credFilepath, std::ios::in);
    if(!credentialsFile){  }
    else {        
        QString username = ui->userEdit->text();
        QString password = ui->passEdit->text();

        std::string line;
        while (std::getline(credentialsFile, line)) {
            if (username.toStdString().c_str() == line.substr(0, line.find(Consts::formatting.delimiterStr))){
                std::string saltPass = line.substr(line.find(Consts::formatting.delimiterStr) + 1);

                std::vector<std::string> splitPassword;
                boost::split(splitPassword, saltPass, boost::is_any_of(":"));

                if (getHashedPassword(QString::fromStdString(splitPassword[0]), password) == QString::fromStdString(splitPassword[1])){
                    /*!
                        Set index of stacked widget to main page
                    */
                    currentUser.setName(username.toStdString().c_str());
                    read_userConfig(username.toStdString().c_str());
                    ui->stackedWidget->setCurrentIndex(Consts::navigation.mainPage);

                    timer->start(Consts::timer.timerDuration);

                } else {
                    notifyUser(Consts::errors.invalidCreds);
                }
            }
        }
        credentialsFile.close();
    }
    // Sets up vectors
    setupUsers();
    loadAdmin();
    updateContacts();
}

void MainWindow::on_createAccButton_clicked()
{
    /*!
        Set index of stacked widget to signup page
    */
    ui->stackedWidget->setCurrentIndex(Consts::navigation.signupPage);
}

void MainWindow::on_signupButton_clicked()
{
    /*!
      Gathers a user's input values for their password and username, checks if it is null
      to ensure no empty credentials are added to the file.
      If it is not NULL, the credentials are successfully registered
    */

    QString username = ui->signupUserEdit->text();

    QString salt = generateSalt();
    QString password = salt + ":" + getHashedPassword(salt, ui->signupPassEdit->text().toStdString().c_str());

    if (username != NULL && password != NULL) {
        std::fstream credentialsFile;
        credentialsFile.open(credFilepath, std::ios::app);
        credentialsFile << username.toStdString().c_str() << Consts::formatting.delimiterStr << password.toStdString().c_str() << std::endl;
        credentialsFile.close();

        std::fstream usersFile;
        usersFile.open(userFilepath, std::ios::app);
        usersFile << username.toStdString().c_str() << std::endl;
        usersFile.close();

        ui->stackedWidget->setCurrentIndex(Consts::navigation.loginPage);

    } else notifyUser(Consts::errors.emptyFields);
}

void MainWindow::on_signupBackButton_clicked()
{
    /*!
        Set index of stacked widget to 0, take user to login page
    */
    ui->stackedWidget->setCurrentIndex(Consts::navigation.loginPage);
}

void MainWindow::setupUsers(){
    std::fstream configFile(userFilepath);
    std::vector<std::string> roomData;
    std::string line;

    while(!configFile.eof()){
        std::getline(configFile, line);
        boost::split(roomData, line, boost::is_any_of(Consts::formatting.delimiterStr));

        if(!roomData[0].empty()) {
            User aUser;
            aUser.setName(roomData[0]);
            for(int i = 1; i < (int)roomData.size(); i++){
                aUser.subscribeToRoom(roomData[i]);
            }
            users.push_back(aUser);
        }
    }
    configFile.close();
}

void MainWindow::loadAdmin(){
    std::fstream adminFile;
    std::string line;
    std::vector<std::string> adminData;

    adminFile.open(adminFilepath, std::ios::in);

    if(adminFile){
        while (std::getline(adminFile, line)) {
            boost::split(adminData, line, boost::is_any_of(Consts::formatting.delimiterStr));

            for (int i = 0; i < (int)rooms.size(); i++){
                if (rooms[i].getName() == adminData[0]){
                    Admin roomAdmin;
                    roomAdmin.setName(adminData[1]);
                    rooms[i].admin = roomAdmin;

                    for (int j = 1; j < (int)adminData.size(); j++){
                        Moderator roomMod;
                        roomMod.setName(adminData[j]);
                        rooms[i].moderators.push_back(roomMod);
                    }
                }
            }
        }
        adminFile.close();
    }
}

void MainWindow::TimerTimeout(){
    if (ui->sendInput->text() == NULL) {
        qDebug() << "User Timeout";
        ui->stackedWidget->setCurrentIndex(Consts::navigation.loginPage);
        timer->stop();
    }
}
