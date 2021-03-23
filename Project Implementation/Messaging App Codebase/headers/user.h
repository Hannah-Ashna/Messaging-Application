#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

class User
{
protected:
    std::string userID;
    std::string name;
    std::string nickname;
    std::string status;

    bool online;

public:
    std::vector<std::string> rooms;

    User();
    void setName(std::string username);
    std::string changeName();
    void subscribeToRoom(std::string room);
    void unsubscribeFromRoom(std::string room);
    std::string getName();
    std::string getStatus();
    std::string getNickname();
    bool getOnline();

};

#endif // USER_H
