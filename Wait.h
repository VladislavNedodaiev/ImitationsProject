#pragma once

#include "Imitation.h"

class imp::Wait : public imp::Imitation
{

	int _wait_ms;

public:

	imp::Wait(int wait_ms);

	void setWait(int wait_ms);

	void execute();

}; // class WaitImitation : public Imitation