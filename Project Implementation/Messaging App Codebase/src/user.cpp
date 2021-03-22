#include "headers/user.h"
#include <iostream>

User::User()
{

}

void User::setName(std::string username){
    name = username;
    std::cout << name << std::endl;

}

std::string User::changeName()
{

}

void User::subscribeToRoom()
{

}

void User::unsubscribeFromRoom()
{

}

std::string User::getName()
{
    return name;
}

std::string User::getNickname()
{

}

std::string User::getStatus()
{

}

bool User::getOnline()
{

}
