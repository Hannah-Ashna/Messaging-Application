#ifndef CHANNEL_H
#define CHANNEL_H

#include <string>
#include <vector>

#include "message.h"

class Channel //! Channel contains messages and channel metadata
{
public:
    std::string name; //!< The name of the channel
    std::vector<Message> messages;  //!< A vector of sent messages in the channel

    Channel();
    void setName(std::string name);
    std::string getName();

    void addMessage(Message message);
    void deleteMessage(Message message);
};

#endif // CHANNEL_H
