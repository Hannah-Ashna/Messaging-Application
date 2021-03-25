#include "headers/mainwindow.h"
#include "headers/message.h"
#include "ui_mainwindow.h"

#include <QtCore/QDateTime>
#include <QtMqtt/QMqttClient>
#include <QtWidgets/QMessageBox>
#include <QInputDialog>
#include <boost/algorithm/string.hpp>

#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*!
      Create new instance of QMqttClient and set host and port values
      When CLient is disconnected call brokerDisconnect()
      When a message is recieved, create the format 'QDate +  ":" +  string' and send to message log
    */
    m_client = new QMqttClient(this);
    m_client->setHostname(ui->hostEdit->text());
    m_client->setPort(ui->portSpinBox->value());

    connect(m_client, &QMqttClient::disconnected, this, &MainWindow::brokerDisconnected);

    connect(m_client, &QMqttClient::messageReceived, this, [this](const QByteArray &message) {
        Message m;
        Channel c = getCurrentChannel();

        m.setMessageContent(QString(message).toStdString().c_str());
        c.addMessage(m);

        ui->messageLog->insertPlainText(m.getFormattedMessage(currentUser));
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
    ui->buttonConnect->setText(tr("Connect"));
}

void MainWindow::setClientPort(int p)
{
    /*!
        Set client port
    */
    m_client->setPort(p);
}

void MainWindow::on_refreshButton_clicked() {
    ui->roomDropDown->clear();
    ui->channelDropDown->clear();
    rooms.clear();

    read_userConfig(currentUser.getName());
}

void MainWindow::notifyUser(std::string message) {
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
    if (m_client->state() == QMqttClient::Disconnected) {
        ui->hostEdit->setEnabled(false);
        ui->portSpinBox->setEnabled(false);
        ui->buttonConnect->setText(tr("Disconnect"));
        m_client->connectToHost();
    } else {
        ui->hostEdit->setEnabled(true);
        ui->portSpinBox->setEnabled(true);
        ui->buttonConnect->setText(tr("Connect"));
        m_client->disconnectFromHost();
    }
}

int MainWindow::getCurrentRoomIndex(){
    return ui->roomDropDown->currentIndex();
}

void MainWindow::on_addRoomButton_clicked(){
    bool ok;
    QString roomName = QInputDialog::getText(this, tr("Enter Room Name"), tr("Room Name:"),QLineEdit::Normal, "",&ok);

    if(ok && !roomName.isEmpty()) {
        Room room;
        room.setName(roomName.toStdString().c_str());
        ui->roomDropDown->addItem(QString::fromStdString(room.getName()));
        rooms.push_back(room);

        updateFile(roomFilepath, false);
    }
}

void MainWindow::on_deleteRoomButton_clicked() {
    if(ui->roomLabel->text() == "no-group-selected") {
        notifyUser("Error: No Room Selected");
    } else {
        int index = ui->roomDropDown->currentIndex();
        Room room = rooms[getCurrentRoomIndex()];

        ui->roomDropDown->removeItem(index);
        rooms.erase(rooms.begin() + index);

        updateFile(roomFilepath, false);
    }
}

void MainWindow::on_roomDropDown_activated(int index) {
    Room room = rooms[getCurrentRoomIndex()];

    ui->roomLabel->setText(ui->roomDropDown->itemText(index));
    ui->channelDropDown->clear();

    for(int i = 0; i < (int)room.channels.size(); i++) {
        ui->channelDropDown->addItem(QString::fromStdString(room.channels[i].getName()));
    }
}

Channel MainWindow::getCurrentChannel() {
    return rooms[getCurrentRoomIndex()].channels[ui->channelDropDown->currentIndex()];
}

void MainWindow::on_addChannelButton_clicked() {
    if(ui->roomLabel->text() == "no-group-selected") {
        notifyUser("Error: No Room Selected");
    }
    else {
        bool ok;
        QString channelName = QInputDialog::getText(this, tr("Enter Channel Name"), tr("Channel Name:"),QLineEdit::Normal, "",&ok);

        if(ok && !channelName.isEmpty()) {
            Channel channel;
            channel.setName(channelName.toStdString().c_str());
            ui->channelDropDown->addItem(QString::fromStdString(channel.getName()));

            rooms[getCurrentRoomIndex()].channels.push_back(channel);

            updateFile(roomFilepath, false);
        }
    }
}

void MainWindow::on_deleteChannelButton_clicked() {
    if(ui->roomLabel->text() == "no-channel-connected") {
        notifyUser("Error: No Channel Selected");
    } else {
        int index = ui->channelDropDown->currentIndex();
        Room room = rooms[getCurrentRoomIndex()];

        ui->channelDropDown->removeItem(index);
        room.channels.erase(room.channels.begin() + index);

        updateFile(roomFilepath, false);
    }
}

void MainWindow::on_channelDropDown_activated(int index)
{
    /*!
        Set the current topic to the currently selected option from the dropdown box
        Set the label defining the topic for the user to the text in the currently selected dropdown box
        Clear the message log
    */
    auto subscription = m_client->subscribe(ui->channelDropDown->itemText(index));
    if (!subscription) {
        QMessageBox::critical(this, QLatin1String("Error"), QLatin1String("Could not subscribe. Is there a valid connection?"));
        return;
    }
    ui->channelLabel->setText(ui->channelDropDown->itemText(index));
    ui->messageLog->clear();
}

void MainWindow::on_sendButton_clicked()
{
    /*!
        Publish text in input box to message log if client is successfully connected
    */
    try {
        m_client->publish(ui->channelDropDown->currentText(), ui->sendInput->text().toUtf8());
        ui->sendInput->clear();
    }
    catch(...){
        notifyUser("Error: Could not Send Message");
    }
}

void MainWindow::on_addUserButton_clicked() {
      bool ok;
//    bool userFound = false;
//    int userIndex;

//    try {
//        QString userName = QInputDialog::getText(this, tr("Enter Username"), tr("Username:"),QLineEdit::Normal, "",&ok);

//        for (int i = 0; i < (int)users.size(); i++) {
//            if(users.at(i).getName() == userName.toStdString().c_str()){
//                userFound = true;
//                userIndex = i;
//            }
//        }
//        if(ok && userFound && !userName.isEmpty()) {
//            users.at(userIndex).subscribeToRoom(rooms[getCurrentRoomIndex()].getName());
//            rooms[getCurrentRoomIndex()].addMembers(userName.toStdString().c_str());

//            updateFile(userFilepath, true);
//        }
//        else {
//            if(!userFound) {
//                notifyUser("Error: Username Not Found");
//            }
//            if(userName.isEmpty()) {
//                notifyUser("Error: Username Field Empty");
//            }
//        }
//    }
//    catch (...){
//        notifyUser("Error: Room Not Selected");
//    }

    try {
        QString userName = QInputDialog::getText(this, tr("Enter Username"), tr("Username:"),QLineEdit::Normal, "",&ok);

        if(ok) {
            std::fstream configFile;
            std::vector<std::string> lineData;
            std::string line;
            std::string newConfig;

            configFile.open(userFilepath, std::ios::in);

            if(!configFile){
            }

            else {
                while (std::getline(configFile, line)) {
                    boost::split(lineData, line, boost::is_any_of(" "));

                    if (lineData[0] == userName.toStdString().c_str()) {
                        line += " " + rooms[getCurrentRoomIndex()].getName();
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
    catch (...){
        notifyUser("Error: Room Not Selected");
    }
}

void MainWindow::on_removeUserButton_clicked() {
    bool ok;
    bool userFound = false;
    int userIndex;

    try {
        QString userName = QInputDialog::getText(this, tr("Enter Username"), tr("Username:"),QLineEdit::Normal, "",&ok);

        for (int i = 0; i < (int)users.size(); i++) {
            if(users.at(i).getName() == userName.toStdString().c_str()){
                userFound = true;
                userIndex = i;
            }
        }
        if(ok && userFound && !userName.isEmpty()) {
            users.at(userIndex).unsubscribeFromRoom(rooms[getCurrentRoomIndex()].getName());
            rooms[getCurrentRoomIndex()].removeMember(userName.toStdString().c_str());

            updateFile(userFilepath, true);
        } else {
            if(!userFound){
                notifyUser("Error: Username not found");
            }
            if(userName.isEmpty()) {
                notifyUser("Error: Username Field Empty");
            }
        }
    }

    catch (...){
        notifyUser("Error: Room Not Selected");
    }
}

void MainWindow::on_settingsButton_clicked()
{
    /*!
        Set index of stackedWidget to 3, take user to setting screen
    */
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_backButton_clicked()
{
    /*!
        Set index of stacked widget to 2, take user to main page
    */
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::updateFile(std::string filePath, bool isUser) {
    std::ofstream file (filePath);
    std::string line;

    if(file.is_open()) {
        if (isUser) {
            for(int i = 0; i < (int)users.size(); i++){
                line = users.at(i).getName();
                for(int j = 0; j < (int)users.at(i).rooms.size(); j++){
                    line += " " + users.at(i).rooms.at(j);
                }
                line += "\n";
                file << line;
            }
        } else {
            for(int i = 0; i < (int)rooms.size(); i++){
                line = rooms.at(i).getName();
                for(int j = 0; j < (int)rooms.at(i).channels.size(); j++){
                    line += " " + rooms.at(i).channels.at(j).getName();
                }
                line += "\n";
                file << line;
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
    if(!configFile){
    }

    else {
        while (std::getline(configFile, line)) {
            boost::split(roomData, line, boost::is_any_of(" "));
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
    if(!roomConfigFile){
    }

    else {
        while (std::getline(roomConfigFile, line)) {
            boost::split(channelData, line, boost::is_any_of(" "));
            if (channelData[0] == roomName) {
                for(int i = 1; i < (int)channelData.size(); i++){
                    Channel channel;
                    channel.setName(channelData[i]);
                    for(int j = 0; j < (int)rooms.size(); j++){
                        if (rooms[j].getName() == roomName){
                            rooms[j].channels.push_back(channel);
                        }
                    }
                }
            }
        }
        roomConfigFile.close();
    }
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
        // Adding users to user vector - JAD uwu
        User user = User();

        QString username = ui->passEdit->text();
        QString password = ui->userEdit->text();

        std::string line;
        while (std::getline(credentialsFile, line)) {
            user.setName(line.substr(line.find(" ") + 1));
            users.push_back(user);
            if (username.toStdString().c_str() == line.substr(line.find(" ") + 1)){
                if (password.toStdString().c_str() == line.substr(0, line.find(" "))){
                    /*!
                        Set index of stacked widget to 2, take user to main page
                    */
                    currentUser.setName(username.toStdString().c_str());
                    read_userConfig(username.toStdString().c_str());
                    ui->stackedWidget->setCurrentIndex(2);
                } else {
                    notifyUser("Login Credentials Invalid");
                }
            }
        }
        credentialsFile.close();
    }
}

void MainWindow::on_createAccButton_clicked()
{
    /*!
        Set index of stacked widget to 1, take user to to signup page
    */
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_signupButton_clicked()
{
    /*!
      Gathers a user's input values for their password and username, checks if it is null
      to ensure no empty credentials are added to the file.
      If it is not NULL, the credentials are successfully registered
    */
    QString username = ui->signupUserEdit->text();
    QString password = ui->signupPassEdit->text();

    if (username != NULL && password != NULL) {
        std::fstream credentialsFile;
        credentialsFile.open(credFilepath, std::ios::out);
        credentialsFile << username.toStdString().c_str() << " " << password.toStdString().c_str();
        credentialsFile.close();
    } else {
        notifyUser("Error: Fields must not be empty");
    }
}

void MainWindow::on_signupBackButton_clicked()
{
    /*!
        Set index of stacked widget to 0, take user to login page
    */
    ui->stackedWidget->setCurrentIndex(0);
}
