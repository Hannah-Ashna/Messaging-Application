#include "headers/room.h"
/**
 * @brief Room class
 * contains a group of channels and the names of the moderators/admins
 */
Room::Room()
{

}

void Room::setName(std::string name)
//! Sets  the name of the room
/*!
 * \param name the name to be set
 */
{
    this->name = name;
}

std::string Room::getName()
//! Returns rooms name
/*!
 * \return The room name
 */
{
    return name;
}

void Room::setRoomID(int roomID)
//! Sets the Room ID
/*!
 * \param roomID the ID to be set
 */
{
    this->roomID = roomID;
}

int Room::getRoomID()
//! Gets the Room ID
/*!
 * \return Returns the ID
 */
{
    return roomID;
}

std::vector<std::string> Room::getMembers()
//! Returns users in room
/*!
 * \return Returns a vector of the members usernames
 */
{
    return members;
}

void Room::addMembers(std::string member)
//! Adds a user to the room
/*!
 * \param member The username of the user to be added
 */
{

    members.push_back(member);
}

void Room::removeMember(std::string member)
//! removes a user to the room
/*!
 * \param member The username of the user to be removed
 */
{
    for(int i = 0; i < (int)members.size(); i++){
        if(members.at(i) == member){
            members.erase(members.begin() + i);
        }
    }
}

void Room::addMod(Moderator mod)
//! adds a moderator to a room
/*!
 * \param mod The username of the user to be added as a moderator
 */
{

    moderators.push_back(mod);
}

void Room::removeMod(std::string modName)
//! removes a moderator to a room
/*!
 * \param modName The username of the user to be removed as a moderator
 */
{
    for(int i = 0; i < (int)moderators.size(); i++){
        if(moderators.at(i).getName() == modName){
            moderators.erase(moderators.begin() + i);
        }
    }
}

void Room::addChannel(Channel channel)
//! adds a channel to a room
/*!
 * \param mod
 */
{

    channels.push_back(channel);
}

std::vector<Channel> Room::getChannelList()
//! A vector of the current channels in the room
/*!
 * \return A vector of channels in the room
 */
{

    return channels;
}
