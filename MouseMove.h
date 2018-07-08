#pragma once

#include "Imitation.h"

class imp::MouseMove : public imp::Imitation
{

	int _dx;
	int _dy;
	bool _abs;

public:

	imp::MouseMove(int dx, int dy, bool absolute);

	void setMove(int dx, int dy, bool absolute);

	void execute();

}; // class MouseMove : public Imitation