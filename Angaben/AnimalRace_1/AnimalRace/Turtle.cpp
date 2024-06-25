//
//  Turtle.cpp
//  AnimalRace
//
//  Created by John Kulha on 22.06.23.
//

#include "Turtle.hpp"

Turtle::Turtle(std::string name, int distance) : Animal(name, distance) {};

void Turtle::run() {
    if (confused) {
        // equals to < 2 or > 0
        if (rand()%3 != 0) {
            confused = false;
        }
        return;
    }
    
    distance -= 1;
}
