#ifndef ADMIN_H
#define ADMIN_H

#include "user.h"
#include "moderator.h"

class Admin: public Moderator
        //! Admin class handles admin functions
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
