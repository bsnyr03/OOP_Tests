#include <iostream>

#include "Race.h"
#include "Rabbit.h"
#include "Turtle.h"

using namespace std;

int main()
{
    // creating the game
    Race wineyard;

    //creating starters
    wineyard.addAnimal(std::make_unique<Rabbit>("Roger", 20));
    wineyard.addAnimal(std::make_unique<Rabbit>("Bugs", 20));
    wineyard.addAnimal(std::make_unique<Turtle>("Donatello", 20));
    wineyard.addAnimal(std::make_unique<Turtle>("Raphael", 20));

    // run the game
    wineyard.competition();

    return 0;
}
