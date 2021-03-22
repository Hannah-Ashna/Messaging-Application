#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>
#include <QtCore/QString>

#include "user.h"

class Message {
public:
    std::string messageContent;
    std::string username;

    Message();

    QString getFormattedMessage();
    QString getMessageContent();

    void setMessageContent(std::string);
    void notifyUser();
};

#endif // MESSAGE_H
