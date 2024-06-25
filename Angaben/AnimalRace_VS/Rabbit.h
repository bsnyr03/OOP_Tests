#pragma once
#include "Animal.h"
class Rabbit :
    public Animal
{
private:
    bool _sleeping;

public:
    Rabbit(std::string name, int distance);
    void run() override;
};

