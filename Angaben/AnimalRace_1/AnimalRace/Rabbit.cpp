//
//  Rabbit.cpp
//  AnimalRace
//
//  Created by John Kulha on 22.06.23.
//

#include <iostream>
#include "Rabbit.hpp"

Rabbit::Rabbit(std::string name, int distance) : Animal(name, distance) {
}

void Rabbit::run() {
    
    if (isSlepping) {
        if (rand()%3 == 0) {
            isSlepping = false;
        }
        return;
    }
    
    if (confused) {
        if (rand()%3 == 0) {
            confused = false;
        }
        return;
    }
    
    distance -= 3;
    
    if (!atGoal()) {
        // Maybe sleep?
        if (rand()%3 == 0) {
            isSlepping = true;
            std::cout << "The rabbit fell asleep " << distance << " from the goal" << std::endl;
        }
    }
}
