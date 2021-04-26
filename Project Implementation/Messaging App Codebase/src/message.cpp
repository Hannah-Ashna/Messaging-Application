#include "headers/message.h"

#include <QtCore/QDateTime>
#include <QMessageBox>

std::string messageContent;

Message::Message()
{

}

QString Message::getFormattedMessage(User& user)
//! Gets the message formatted message with the senders username and the message contents
/*!
 * \param user A pointer to the sender used to get the senders username
 * \return The formatted message in the format *username:message*
 */
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
//! Gets the message content
/*!
 * \return The content of a message
 */
{
    return QString::fromStdString(messageContent);
}

void Message::setMessageContent(std::string message)
//! Sets the message content
/*!
 * \param message The content to be set
 */
{
    messageContent = message;
}
