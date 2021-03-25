#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

class User
{
protected:
    std::string userID;
    std::string name;
    std::string status;

    bool online = false;

public:
    std::vector<std::string> rooms;

    User();
    void setName(std::string username);
    std::string getName();

    bool subscribeToRoom(std::string room);
    void unsubscribeFromRoom(std::string room);

    void setOnlineStatus(bool online);
    bool getOnlineStatus();
};

#endif // USER_H
