#include "headers/user.h"
#include <iostream>

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
{
    for(int i = 0; i < (int)rooms.size(); i++){
        if(rooms.at(i) == room){
            rooms.erase(rooms.begin() + i);
        }
    }
}

std::string User::getName()
{
    return name;
}

std::string User::getStatus()
{
    return "stub";
}

bool User::getOnline()
{
    return "stub";
}
