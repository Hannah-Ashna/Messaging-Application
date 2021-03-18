#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>
#include <QtCore/QString>

#include "user.h"

class Message {
public:
    std::string messageContent;

    Message();
    QString getFormattedMessage();
    QString getMessageContent();
    void setMessageContent(std::string);
};

#endif // MESSAGE_H
