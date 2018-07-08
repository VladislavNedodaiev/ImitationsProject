#include "MouseMove.h"

imp::MouseMove::MouseMove(int dx, int dy, bool absolute)
{

	this->setMove(dx, dy, absolute);

} // imp::MouseMove::MouseMove(int dx, int dy, bool absolute)

void imp::MouseMove::setMove(int dx, int dy, bool absolute)
{

	this->_dx = dx;
	this->_dy = dy;
	this->_abs = absolute;

} // void imp::MouseMove::setMove(int dx, int dy, bool absolute)

void imp::MouseMove::execute()
{

	if (this->_abs)
		mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE, _dx, _dy, 0, 0);
	else
		mouse_event(MOUSEEVENTF_MOVE, _dx, _dy, 0, 0);

} // void imp::MouseMove::execute()