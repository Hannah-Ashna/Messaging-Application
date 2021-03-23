#include "headers/channel.h"

Channel::Channel()
{

}

void Channel::setName(std::string name)
{
    this->name = name;
}

std::string Channel::getName()
{
    return this->name;
}

void Channel::addMessage(Message message)
{
    messages.push_back(message);
}

void Channel::deleteMessage(Message message)
{
    //FIX LATER
    //for(int i = 0; i < messages.size(); i++) {
    //    if(message.getFormattedMessage() == messages[i].getFormattedMessage()) {
    //        messages.erase(messages.begin() + i);
    //    }
    //}
}
