#include "headers/mainwindow.h"
#include "ui_mainwindow.h"

#include <QtCore/QDateTime>
#include <QtMqtt/QMqttClient>
#include <QtWidgets/QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_client = new QMqttClient(this);
    m_client->setHostname(ui->hostEdit->text());
    m_client->setPort(ui->portSpinBox->value());

    connect(m_client, &QMqttClient::disconnected, this, &MainWindow::brokerDisconnected);

    connect(ui->hostEdit, &QLineEdit::textChanged, m_client, &QMqttClient::setHostname);
    connect(ui->portSpinBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::setClientPort);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::brokerDisconnected()
{
    ui->hostEdit->setEnabled(true);
    ui->portSpinBox->setEnabled(true);
    ui->buttonConnect->setText(tr("Connect"));
}

void MainWindow::setClientPort(int p)
{
    m_client->setPort(p);
}

void MainWindow::on_sendButton_clicked()
{
    ui->messageLog->insertPlainText(ui->sendInput->text() + "\n");
    ui->sendInput->clear();
}

void MainWindow::on_buttonConnect_clicked()
{
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

void MainWindow::on_settingsButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_backButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
