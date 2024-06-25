//
// Created by Ruslan Kotliarenko on 23.06.24.
//

#include "Turtle.h"
Turtle::Turtle(std::string _name, int _distance) :
  Animal(std::move(_name), _distance) {}

void Turtle::run() {
  bool chance = generateRandomNumber(0, 100) < (100 * 2 / 3);
  if (this->getIsConfused() && chance) {
    setIsConfused(false);
  }

  this->setDistance(this->getDistance() - 1);
}