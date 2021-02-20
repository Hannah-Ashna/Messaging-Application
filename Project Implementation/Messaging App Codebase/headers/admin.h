#ifndef ADMIN_H
#define ADMIN_H

#include "user.h"

class Admin
{
public:
    User admin;

    Admin();

private:
    void addModerator(User user);
    void removeModerator(User user);
    void changeAdmin(User user);
};

#endif // ADMIN_H
