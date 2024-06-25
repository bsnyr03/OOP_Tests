//
// Created by Ruslan Kotliarenko on 23.06.24.
//

#ifndef INC_2023_2_ANIMAL_H
#define INC_2023_2_ANIMAL_H

#include <string>
#include <cmath>
#include "helpers.h"
#include <iostream>

class Animal {
  private:
    std::string name;
    int distance;
    bool isConfused;

  public:
    Animal(std::string _name, int _distance);

    // Virtual functions
    virtual void run();

    // Other
    bool atGoal() const;
    void trick(Animal* target) const;

    // Getters
    std::string getName() const;
    int getDistance() const;
    bool getIsConfused() const;

    // Setters
    void setDistance(int _distance);
    void setIsConfused(bool _isConfused);
};

#endif // INC_2023_2_ANIMAL_H
