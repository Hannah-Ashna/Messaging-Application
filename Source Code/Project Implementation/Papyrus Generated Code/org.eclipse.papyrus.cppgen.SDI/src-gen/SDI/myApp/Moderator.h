// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef SDI_MYAPP_MODERATOR_H
#define SDI_MYAPP_MODERATOR_H

/************************************************************
 Moderator class header
 ************************************************************/

#include "SDI/myApp/Pkg_myApp.h"

#include "SDI/myApp/Admin.h"
#include "SDI/myApp/User.h"

namespace SDI {
namespace myApp {

/************************************************************/
/**
 * 
 */
class Moderator: public Admin {
public:

	/**
	 * 
	 */
	User Moderator[];

	/**
	 * 
	 * @return Mod 
	 */
	User GetUser();

protected:

	/**
	 * 
	 * @param User 
	 */
	void AddUser(User /*in*/User);

	/**
	 * 
	 * @param User 
	 */
	void RemoveUser(User /*in*/User);

};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

} // of namespace myApp
} // of namespace SDI

/************************************************************
 End of Moderator class header
 ************************************************************/

#endif