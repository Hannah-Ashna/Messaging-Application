#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "headers/message.h"
#include "headers/channel.h"

#include <QMainWindow>
#include <QMqttClient>
#include <QtCore/QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void setClientPort(int p);

private slots:
    void on_sendButton_clicked();

    void on_settingsButton_clicked();
    void on_backButton_clicked();

    void on_buttonConnect_clicked();

    void on_channelDropDown_activated(int index);
    void on_addChannelButton_clicked();
    void on_deleteChannelButton_clicked();
    Channel getCurrentChannel();

    void on_loginButton_clicked();
    void on_createAccButton_clicked();
    void on_signupButton_clicked();
    void on_signupBackButton_clicked();

    void brokerDisconnected();

private:
    Ui::MainWindow *ui;
    QMqttClient *m_client;
};
#endif // MAINWINDOW_H
