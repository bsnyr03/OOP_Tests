//
// Created by Ruslan Kotliarenko on 23.06.24.
//

#ifndef INC_2023_2_RABBIT_H
#define INC_2023_2_RABBIT_H

#include "Animal.h"

class Rabbit : public Animal {
  private:
    bool isAsleep;

  public:
    Rabbit(std::string _name, int _distance);

    bool getIsAsleep() const;
    void setIsAsleep(bool _isAsleep);

    void run() override;
};

#endif // INC_2023_2_RABBIT_H
