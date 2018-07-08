#include "KeyboardButton.h"

imp::KeyboardButton::KeyboardButton(BYTE key, eKBState state)
{

	this->setKey(key);
	this->setState(state);

} // imp::KeyboardButton::KeyboardButton(BYTE key, eKBState state)

void imp::KeyboardButton::setKey(BYTE key)
{

	this->_key = key;

} // void imp::KeyboardButton::setKey(BYTE key)

void imp::KeyboardButton::setState(eKBState state)
{

	this->_state = state;

} // void imp::KeyboardButton::setState(eKBState state)

void imp::KeyboardButton::execute()
{

	if (this->_state == eKBState::KBDown)
		keybd_event(this->_key, 0, 0, 0);
	else
		keybd_event(this->_key, 0, KEYEVENTF_KEYUP, 0);

} // void imp::KeyboardButton::execute()