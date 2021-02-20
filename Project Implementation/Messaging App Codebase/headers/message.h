#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>

#include "user.h"

class Message {
public:
    std::string messageContent;

    Message();
    Message getMessage();
    std::string getMessageContent();
};

#endif // MESSAGE_H
