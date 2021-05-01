#include "headers/channel.h"
/*!
 * @brief The Channel class
 * Contains Messages sent by users
 */
Channel::Channel()
{

}

void Channel::setName(std::string name)
//! Sets the Channel name
//! \param name The name to set to the room
{
    this->name = name;
}

std::string Channel::getName()
//! Returns the Channel name
//! \return The Channel's name
{
    return this->name;
}

void Channel::addMessage(Message message)
//! Addes a message to the channel
//! \param message the message to be added to the channel.
{
    messages.push_back(message);
}

void Channel::deleteMessage(Message message)
//! Removes a message to the channel
//! \param message The message to be removed from the channel.
{
    //FIX LATER
    //for(int i = 0; i < messages.size(); i++) {
    //    if(message.getFormattedMessage() == messages[i].getFormattedMessage()) {
    //        messages.erase(messages.begin() + i);
    //    }
    //}
}
