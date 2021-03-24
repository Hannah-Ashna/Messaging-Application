#include "headers/user.h"
#include <iostream>

User::User()
{

}

void User::setName(std::string username){
    name = username;
    std::cout << name << std::endl;

}

void User::subscribeToRoom(std::string room)
{
    rooms.push_back(room);
}

void User::unsubscribeFromRoom(std::string room)
{
    for(int i = 0; i < rooms.size(); i++){
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

}

bool User::getOnline()
{

}
