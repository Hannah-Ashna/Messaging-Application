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

    bool online;

public:
    std::vector<std::string> rooms;

    User();
    void setName(std::string username);
    std::string getName();

    void subscribeToRoom(std::string room);
    void unsubscribeFromRoom(std::string room);

    std::string getStatus();
    bool getOnline();
};

#endif // USER_H
