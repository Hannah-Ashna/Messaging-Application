// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef SDI_MYAPP_MEDIA_H
#define SDI_MYAPP_MEDIA_H

/************************************************************
 Media class header
 ************************************************************/

#include "SDI/myApp/Pkg_myApp.h"

#include "PrimitiveTypes/Pkg_PrimitiveTypes.h"
#include "SDI/myApp/Message.h"

namespace SDI {
namespace myApp {

/************************************************************/
/**
 * 
 */
class Media: public Message {
public:

	/**
	 * 
	 */
	::PrimitiveTypes::Integer MediaId;

	/**
	 * 
	 */
	void Download();

};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

} // of namespace myApp
} // of namespace SDI

/************************************************************
 End of Media class header
 ************************************************************/

#endif