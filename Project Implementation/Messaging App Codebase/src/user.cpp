#include "headers/user.h"
#include <iostream>
/**
 * @brief User class
 */
User::User()
{

}

void User::setName(std::string username){
    name = username;
}

bool User::subscribeToRoom(std::string room)
{
    for(int i = 0; i < (int)rooms.size(); i++){
        if(rooms.at(i) == room){
            std::cout << "user already subscribed"<< std::endl;
            return false;
        }
    }
    rooms.push_back(room);
    return true;
}

void User::unsubscribeFromRoom(std::string room)
//! unsubscribes from room
/*!
 * \param room name to be unsubscribed from
 */
{
    for(int i = 0; i < (int)rooms.size(); i++){
        if(rooms.at(i) == room){
            rooms.erase(rooms.begin() + i);
        }
    }
}

std::string User::getName()
/*!
 * \return Returns the Users name
 */
{
    return name;
}

void User::setOnlineStatus(bool online)
/*! \param online status to be set online:true offline:false
 */
{
    this->online = online;
}

bool User::getOnlineStatus()
/*! \return Returns users online status online:true offline:false
  */
{
    return online;
}
