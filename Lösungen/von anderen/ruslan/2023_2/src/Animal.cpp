//
// Created by Ruslan Kotliarenko on 23.06.24.
//

#include "Animal.h"

Animal::Animal(std::string _name, int _distance) :
  name(std::move(_name)), distance(_distance), isConfused(false) {}

// Virtual
void Animal::run() {}

// Other
bool Animal::atGoal() const {
  return distance < 1;
}

void Animal::trick(Animal* target) const {
  if (target == nullptr) {
    throw std::invalid_argument("Opponent NULL");
  } else if (std::abs(target->getDistance() - this->getDistance())) {
    throw std::logic_error("Opponent too far away");
  }

  if (generateRandomNumber(0, 100) < (100 / 6)) {
    target->setIsConfused(true);
  }
}

// Getters
std::string Animal::getName() const {
  return name;
}
int Animal::getDistance() const {
  return distance;
}
bool Animal::getIsConfused() const {
  return isConfused;
}

// Setters
void Animal::setDistance(int _distance) {
  distance = _distance;
}
void Animal::setIsConfused(bool _isConfused) {
  if (_isConfused) {
    std::cout << "The " << this->name << " got distracted" << std::endl;
  }
  isConfused = _isConfused;
}
