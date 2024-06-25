//
// Created by Ruslan Kotliarenko on 23.06.24.
//

#include "Rabbit.h"

Rabbit::Rabbit(std::string _name, int _distance) :
  isAsleep(false),
  Animal(std::move(_name), _distance) {}

bool Rabbit::getIsAsleep() const {
  return isAsleep;
}

void Rabbit::setIsAsleep(bool _isAsleep) {
  if (_isAsleep) {
    std::cout << "The Rabbit fell asleep " << this->getDistance() << " from "
                                                                     "the "
                                                                     "goal"
              << std::endl;
  }
  isAsleep = _isAsleep;
}

void Rabbit::run() {
  bool chance = generateRandomNumber(0, 100) < (100 / 3);

  if (this->getIsAsleep()) {
    // When sleeping has 1/3 chance to wake up
    if (chance) this->setIsAsleep(false);
    return;
  } else if (this->getIsConfused()) {
    // When confused has 1/3 chance to come conscious
    if (chance) setIsConfused(false);
    return;
  }

  // Decrease distance by 3
  this->setDistance(this->getDistance() - 3);
  if (this->atGoal()) return;

  if (chance) {
    // Fall asleep with 1/3 chance
    this->setIsAsleep(true);
  }
}