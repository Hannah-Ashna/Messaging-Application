#ifndef CHANNEL_H
#define CHANNEL_H

#include <string>

#include "message.h"

class Channel
{
public:
    std::string description;

    Channel();
    void changeTitle(std::string title=NULL);
    void changeDescription(std::string desc);
    void sendMessage(Message message);
    std::string getTitle();
    std::string getDescription();
    void deleteMessage(Message message);
    void subscribeToChannel();
    void unsubscribeFromChannel();
};

#endif // CHANNEL_H
