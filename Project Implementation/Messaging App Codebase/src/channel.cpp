#include "headers/channel.h"

Channel::Channel()
{

}

void Channel::setName(std::string theName)
{
    name = theName;
}

std::string Channel::getName()
{
    return name;
}

void Channel::addMessage(Message message)
{
    messages.push_back(message);
}

void Channel::deleteMessage(Message message)
{
    //for(int i = 0; i < messages.size(); i++) {
    //    if(message.getFormattedMessage() == messages[i].getFormattedMessage()) {
    //        messages.erase(messages.begin() + i);
    //    }
    //}
}
