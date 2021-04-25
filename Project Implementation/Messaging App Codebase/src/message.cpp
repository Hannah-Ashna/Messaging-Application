#include "headers/message.h"

#include <QtCore/QDateTime>
#include <QMessageBox>

std::string messageContent;

Message::Message()
{

}

QString Message::getFormattedMessage(User& user)
{
    QString formattedMessage =
            QDateTime::currentDateTime().toString() + " "
            + QString::fromStdString(user.getName())
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
}
