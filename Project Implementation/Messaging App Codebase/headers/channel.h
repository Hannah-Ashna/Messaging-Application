#ifndef CHANNEL_H
#define CHANNEL_H

#include <string>
#include <vector>

#include "message.h"

class Channel
{
public:
    std::string name;
    std::vector<Message> messages;

    Channel();
    void setName(std::string name);
    std::string getName();

    void addMessage(Message message);
    void deleteMessage(Message message);
};

#endif // CHANNEL_H
