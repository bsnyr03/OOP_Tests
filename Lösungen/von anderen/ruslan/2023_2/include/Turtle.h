//
// Created by Ruslan Kotliarenko on 23.06.24.
//

#ifndef INC_2023_2_TURTLE_H
#define INC_2023_2_TURTLE_H

#include "Animal.h"

class Turtle : public Animal {
public:
  Turtle(std::string _name, int _distance);

  void run() override;
};

#endif // INC_2023_2_TURTLE_H
