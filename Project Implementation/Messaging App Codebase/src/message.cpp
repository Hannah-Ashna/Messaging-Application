#include "headers/message.h"

#include <QtCore/QDateTime>
#include <QMessageBox>

std::string messageContent;

Message::Message()
{

}

QString Message::getFormattedMessage()
{
    QString formattedMessage =
            QDateTime::currentDateTime().toString()
            + QLatin1String(" : ")
            + QString::fromStdString(messageContent)
            + QLatin1Char('\n');

    return formattedMessage;
}

QString Message::getMessageContent()
{
    return QString::fromStdString(messageContent);
}

void Message::setMessageContent(std::string message)
{
    messageContent = message;
    notifyUser();
}

void Message::notifyUser()
{
    QMessageBox notification;
    notification.setText("New Notification");
    notification.setInformativeText(getFormattedMessage());
    notification.setStandardButtons(QMessageBox::Ok);
    notification.setDefaultButton(QMessageBox::Ok);
    int ret = notification.exec();
}
