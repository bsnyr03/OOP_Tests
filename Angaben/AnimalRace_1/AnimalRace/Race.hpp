#ifndef RACE_H
#define RACE_H

#include <vector>
#include "Animal.hpp"

class Race
{
public:
    Race();
    virtual ~Race();
    
    void addAnimal(Animal*);

    void competition();
    bool raceFinished();
    void printResult();
    void trickEachother();
    
private:
    std::vector<Animal*> animals;

};

#endif // RACE_H
