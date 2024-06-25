#include "Rabbit.h"

Rabbit::Rabbit(std::string name, int distance) : Animal(name, distance), _sleeping(false)
{
}

void Rabbit::run()
{
	if (_sleeping)
	{
		if (std::rand() % 3 == 0)
		{
			_sleeping = false;
		}
		return;
	}

	if (_confuso)
	{
		if (std::rand() % 3 == 0)
		{
			_confuso = false;
		}
		return;
	}

	_distance -= 3;
	if (!atGoal())
	{
		if (std::rand() % 3 == 0)
		{
			std::cout << std::endl << "The Rabbit fell asleep " << _distance << " from the goal";

		}
	}
}
