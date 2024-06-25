#ifndef RACE_H
#define RACE_H

#include "Animal.h"
#include <vector>


class Race
{
private:
    std::vector<Animal*> animals;

    bool raceFinished();
    void printResult();
    void trickEachother();
    

public:
    Race();
    virtual ~Race();

    void competition();

    void addAnimal(Animal* animal);

};

#endif // RACE_H
