#pragma once
#include "Animal.h"
class Turtle :
    public Animal
{
public:
   Turtle(std::string name, int distance);
   void run() override;
};

