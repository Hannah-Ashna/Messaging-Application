#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

class User//! Contains all user infomation includeing their ID name and status
{
protected:
    std::string userID;  //!< The users ID
    std::string name; //!< The username of the user
    std::string status;  //!< The current status of the user not implemented

    bool online = false;  //!< The online status of the user

public:
    std::vector<std::string> rooms;  //!< A vector of room names the user is in

    User();
    void setName(std::string username);
    std::string getName();

    bool subscribeToRoom(std::string room);
    void unsubscribeFromRoom(std::string room);

    void setOnlineStatus(bool online);
    bool getOnlineStatus();
};

#endif // USER_H
