#include "headers/mainwindow.h"
#include "ui_mainwindow.h"

#include <QtCore/QDateTime>
#include <QtMqtt/QMqttClient>
#include <QtWidgets/QMessageBox>
#include <fstream>
#include <iostream>

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
        const QString content = QDateTime::currentDateTime().toString()
                    + QLatin1String(" : ")
                    + message
                    + QLatin1Char('\n');
        ui->messageLog->insertPlainText(content);
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
    if (m_client->publish(ui->channelDropDown->currentText(), ui->sendInput->text().toUtf8()) == -1)
        QMessageBox::critical(this, QLatin1String("Error"), QLatin1String("Could not publish message"));
    ui->sendInput->clear();
}

void MainWindow::on_settingsButton_clicked()
{
    /*!
      Set index of stackedWidget to 1, take user to setting screen
    */
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_backButton_clicked()
{
    /*!
      Set index of stacked widget to 0, take user to main page
    */
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_loginButton_clicked(){
    std::fstream credentialsFile;
    credentialsFile.open("credentials.txt", std::ios::in);
    if(!credentialsFile){
        std::cout<< "UWU IT NO EXISTY"<< std::endl;
        std::fstream UWUFILE;
        UWUFILE.open("credentials.txt", std::ios::out);
        UWUFILE << "UWU uwu";
        UWUFILE.close();
    }

    else {
        QString username = ui->passEdit->text();
        QString password = ui->userEdit->text();

        std::string line;
        while (std::getline(credentialsFile, line)) {
            if (username.toStdString().c_str() == line.substr(line.find(" ") + 1)){
                if (password.toStdString().c_str() == line.substr(0, line.find(" "))){
                    ui->stackedWidget->setCurrentIndex(1);
                }
            }
        }

        credentialsFile.close();
    }
}
