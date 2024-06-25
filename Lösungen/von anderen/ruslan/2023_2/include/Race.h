#ifndef RACE_H
#define RACE_H

#include "Animal.h"
#include <vector>

class Race
{
  private:
    std::vector<std::unique_ptr<Animal>> animals;

    public:
        void competition();

        void addAnimal(std::unique_ptr<Animal> animal);
        bool raceFinished();

        void printResult() const;
        void trickEachother();
};

#endif // RACE_H
