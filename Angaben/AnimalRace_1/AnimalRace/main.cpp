#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "Race.hpp"
#include "Rabbit.hpp"
#include "Turtle.hpp"

using namespace std;

int main()
{
    //Seeding random number generator
    srand(time(nullptr));

    // creating the game
    Race wineyard;

    //creating starters
    wineyard.addAnimal(new Rabbit("Roger", 20));
    wineyard.addAnimal(new Rabbit("Bugs", 20));
    wineyard.addAnimal(new Turtle("Donatello", 20));
    wineyard.addAnimal(new Turtle("Raphael", 20));

    // run the game
    wineyard.competition();

    return 0;
}

