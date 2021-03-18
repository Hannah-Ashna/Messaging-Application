#include "headers/message.h"

#include <QtCore/QDateTime>

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
}
