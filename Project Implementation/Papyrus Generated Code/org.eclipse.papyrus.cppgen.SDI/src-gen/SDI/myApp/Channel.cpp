// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#define SDI_myApp_Channel_BODY

/************************************************************
 Channel class body
 ************************************************************/

// include associated header file
#include "SDI/myApp/Channel.h"

// Derived includes directives
#include "SDI/myApp/Message.h"

namespace SDI {
namespace myApp {

// static attributes (if any)

/**
 * 
 * @param Title 
 */
void Channel::ChangeTitle(::PrimitiveTypes::String /*in*/Title) {
}

/**
 * 
 * @param Desc 
 */
void Channel::ChangeDescription(::PrimitiveTypes::String /*in*/Desc) {
}

/**
 * 
 * @param NewMessage 
 */
void Channel::SendMessage(Message /*in*/NewMessage) {
}

/**
 * 
 * @return ChannelTitle 
 */
::PrimitiveTypes::String Channel::GetTitle() {
}

/**
 * 
 * @return Description 
 */
::PrimitiveTypes::String Channel::GetDescription() {
}

/**
 * 
 * @param Message 
 */
void Channel::DeleteMessage(Message /*in*/Message) {
}

/**
 * 
 */
void Channel::SubscribeToChannel() {
}

/**
 * 
 */
void Channel::UnSubscribeFromChannel() {
}

} // of namespace myApp
} // of namespace SDI

/************************************************************
 End of Channel class body
 ************************************************************/