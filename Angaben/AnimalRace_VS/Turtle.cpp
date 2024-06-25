#include "Turtle.h"

Turtle::Turtle(std::string name, int distance) : Animal(name, distance)
{
}

void Turtle::run()
{

	if (_confuso)
	{
		if (std::rand() % 3 == 0 || std::rand() % 3 == 1)
		{
			_confuso = false;
		}
		return;
	}

	_distance--;
}
