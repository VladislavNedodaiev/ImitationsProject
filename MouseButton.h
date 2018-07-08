#pragma once

#include "Imitation.h"

class imp::MouseButton : public imp::Imitation
{

public:

	enum eMButton
	{
		Left = 0,
		Middle = 1,
		Right = 2
	};

	enum eMBState
	{
		MBUp = 0,
		MBDown = 1,
	};

	// button is a button, which is going to be pressed/unpressed
	// state is a value which determines whether mouse button is going to be pressed up or down
	imp::MouseButton(eMButton button, eMBState state);

	void setButton(eMButton button);
	void setMBState(eMBState state);

	void execute();

private:

	eMButton _button;
	eMBState _state;

}; // class MouseButtonImitation : public Imitation