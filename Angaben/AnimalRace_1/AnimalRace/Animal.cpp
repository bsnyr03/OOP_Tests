//
//  Animal.cpp
//  AnimalRace
//
//  Created by John Kulha on 22.06.23.
//

#include <exception>
#include <iostream>
#include "Animal.hpp"

Animal::Animal(std::string name, int distance) : name(name), distance(distance), confused(false) {
}

Animal::~Animal() {}

bool Animal::atGoal() {
    if (distance < 1) {
        return true;
    } else {
        return false;
    }
    //return distance < 1;
}

void Animal::trick(Animal* other) {
    if (other == nullptr) {
        throw std::invalid_argument("Opponent NULL");
    }
    
    if (std::abs(this->distance - other->distance) > 5) {
        throw std::logic_error("Opponent too far away");
    }
    
    if (rand()%6 == 0) {
        other->confused = true;
        std::cout << "The " << other->name << " got distracted" << std::endl;
    }
}

std::string Animal::getName() {
    return name;
}

int Animal::getDistance() {
    return distance;
}
