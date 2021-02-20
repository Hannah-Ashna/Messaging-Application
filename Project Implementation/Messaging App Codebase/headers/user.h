#ifndef USER_H
#define USER_H

#include <string>

class User
{
public:
    std::string userID;
    std::string name;
    std::string nickname;
    std::string status;
    bool online;

    User();
    std::string changeName();
    void subscribeToRoom();
    void unsubscribeFromRoom();
    std::string getName();
    std::string getStatus();
    std::string getNickname();
    bool getOnline();
};

#endif // USER_H
