#ifndef MESSAGE_H
#define MESSAGE_H

#include "user.h"

#include <string>
#include <QtCore/QString>
#include <QtCore/QDateTime>
#include <QMessageBox>

class Message //! Contains message contents and sender
{

public:
    std::string messageContent;  //!< The content of the sent message
    std::string username;  //!< The username if the sender of the message

    Message();

    QString getFormattedMessage(User& user);
    QString getMessageContent();

    void setMessageContent(std::string);
};

#endif // MESSAGE_H
