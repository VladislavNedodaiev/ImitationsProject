#include "Wait.h"

imp::Wait::Wait(int wait_ms)
{
	
	this->_wait_ms = 0;
	this->setWait(wait_ms);

} // imp::Wait::Wait(int wait_ms)

void imp::Wait::setWait(int wait_ms)
{

	if (wait_ms >= 0)
		this->_wait_ms = wait_ms;

} // void imp::Wait::setWait(int wait_ms)

void imp::Wait::execute()
{

	Sleep(this->_wait_ms);

} // void imp::Wait::execute()