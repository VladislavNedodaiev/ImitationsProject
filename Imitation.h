#pragma once

#include <Windows.h>
#include <iostream>
#include <string>
#include <wchar.h>
#include <random>
#include <ctime>
#include <vector>

namespace imp // imp - imitation project
{

	struct Vector2i
	{

		int x;
		int y;

		Vector2i() { x = 0; y = 0; }
		Vector2i(int x, int y) { this->x = x; this->y = y; }
		Vector2i(Vector2i &vector2i) { x = vector2i.x; y = vector2i.y; }

	}; // struct Vector2i

	class Imitation
	{

	public:

		// execute the imitation
		virtual void execute() = 0;

	}; // class Imitation

	class Wait;
	class MouseButton;
	class MouseMove;
	class KeyboardButton;
	class Imitations;

} // imp - imitation project