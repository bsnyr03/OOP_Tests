#include "Animal.h"

Animal::Animal(std::string name, int distance) : _name(name), _distance(distance), _confuso(false)
{
}

Animal::~Animal()
{
}

bool Animal::atGoal()
{
	return _distance < 1;
}

void Animal::trick(Animal* target)
{
	if (target == nullptr)
		throw std::invalid_argument("Opponent NULL");

	if (std::abs(target->_distance - _distance) > 5)
		throw std::logic_error("Opponent too far away");

	if (std::rand() % 6 == 0)
	{
		target->_confuso = true;
		std::cout << std::endl << "The " << target->_name << " got distracted";
	}
}

std::string Animal::GetName()
{
	return _name;
}

int Animal::GetDistance()
{
	return _distance;
}
