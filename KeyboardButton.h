#pragma once

#include "Imitation.h"

class imp::KeyboardButton : public imp::Imitation
{

public:

	enum eKBState
	{
		KBUp = 0,
		KBDown = 1,
	};

	imp::KeyboardButton(BYTE key, eKBState state);

	void setKey(BYTE key);
	void setState(eKBState state);

	void execute();

private:

	BYTE _key;
	eKBState _state;

}; // class KeyboardImitation : public Imitation