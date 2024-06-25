#pragma once
#include <string>
#include <stdexcept>
#include <math.h>
#include <iostream>

class Animal
{
protected:
	std::string _name;
	int _distance;
	bool _confuso;

public:
	Animal(std::string name, int distance);
	virtual ~Animal();
	virtual void run() = 0;
	bool atGoal();
	void trick(Animal* target);
	std::string GetName();
	int GetDistance();
};

