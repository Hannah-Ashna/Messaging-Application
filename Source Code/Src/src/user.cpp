#include "headers/user.h"

/**
 * @brief User class
 * Contains user infomation and functions
 */
User::User()
{

}

void User::setName(std::string username){
    //! Sets the users name
    //! \param username the name to be set

    name = username;
}

bool User::subscribeToRoom(std::string room)
//! Unsubscribes user from room
/*!
 * \param room the name to be subscribed to
 */
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
 * \param room the name to be unsubscribed from
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
