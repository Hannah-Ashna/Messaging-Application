#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "headers/message.h"
#include "headers/channel.h"
#include "headers/room.h"
#include "headers/user.h"

#include <QMainWindow>
#include <QMqttClient>
#include <QtCore/QString>

#include <QTimer>

#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/asio.hpp>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
        //! The main GUI   
{
    Q_OBJECT

public:
    const std::string credFilepath = "../appconfig/credentials.txt";
    const std::string userFilepath = "../appconfig/userConfig.txt";
    const std::string roomFilepath = "../appconfig/roomConfig.txt";
    const std::string adminFilepath = "../appconfig/roomAdminConfig.txt";

    std::vector<Room> rooms;    //! Vector of current rooms
    std::vector<User> users;    //! Vector of all users
    User currentUser;//! current user object

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //void timeout(const boost::system::error_code& /*e*/, boost::asio::steady_timer* t, int* count);

    void brokerDisconnected();
    void setClientPort(int p);
    void on_buttonConnect_clicked();

    void on_refreshButton_clicked();
    void notifyUser(std::string message);

    int getCurrentRoomIndex();
    void on_roomDropDown_activated(int index);
    void on_addRoomButton_clicked();
    void on_deleteRoomButton_clicked();

    Channel getCurrentChannel();
    void on_channelDropDown_activated(int index);
    void on_addChannelButton_clicked();
    void on_deleteChannelButton_clicked();

    void updateContacts();

    void on_onlineRadio_toggled(bool active);
    void updateOnlineUsers(std::string name, bool status);

    void on_sendButton_clicked();

    void on_addUserButton_clicked();
    void on_removeUserButton_clicked();

    void on_addModButton_clicked();
    void on_removeModButton_clicked();

    void on_settingsButton_clicked();
    void on_backButton_clicked();

    void updateFile(std::string filePath); //! Updates files
    void read_userConfig(std::string username);
    void read_roomConfig(std::string username);

    QString generateSalt(); //! Generates salt for password encription
    QString getHashedPassword(QString salt, QString password);

    void on_loginButton_clicked();    
    void on_createAccButton_clicked();
    void on_signupButton_clicked();
    void on_signupBackButton_clicked();

    void setupUsers();
    void loadAdmin();

    void TimerTimeout();

private:
    Ui::MainWindow *ui;
    QMqttClient *m_client;

    QTimer *timer;
};
#endif // MAINWINDOW_H
