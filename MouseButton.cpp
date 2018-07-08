#include "MouseButton.h"

imp::MouseButton::MouseButton(eMButton button, eMBState state)
{

	this->setButton(button);
	this->setMBState(state);

} // imp::MouseButton::MouseButton(eMButton button, eMBState state)

void imp::MouseButton::setButton(eMButton button)
{

	this->_button = button;

} // void imp::MouseButton::setButton(eMButton button)

void imp::MouseButton::setMBState(eMBState state)
{

	this->_state = state;

} // void imp::MouseButton::setMBState(eMBState state)

void imp::MouseButton::execute()
{

	switch (this->_button)
	{

	case eMButton::Left:
		if (this->_state == eMBState::MBDown)
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
		else
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		break;

	case eMButton::Middle:
		if (this->_state == eMBState::MBDown)
			mouse_event(MOUSEEVENTF_MIDDLEDOWN, 0, 0, 0, 0);
		else
			mouse_event(MOUSEEVENTF_MIDDLEUP, 0, 0, 0, 0);
		break;

	case eMButton::Right:
		if (this->_state == eMBState::MBDown)
			mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
		else
			mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
		break;

	}; // switch (_button)

} // void imp::MouseButton::execute()