#include "Race.h"


bool Race::raceFinished()
{
    for (auto animal : animals)
    {
        if (animal->atGoal())
            return true;
    }
    return false;
}

void Race::printResult()
{
    for (auto animal : animals)
    {
        std::cout << std::endl << animal->GetName() << ": " << animal->GetDistance();
    }
}

void Race::trickEachother()
{
    for (auto animal : animals)
    {
        animal->trick(animals[std::rand() % (animals.size() - 1)]);
    }
}

void Race::addAnimal(Animal* animal)
{
    animals.push_back(animal);
}

Race::Race()
{
    //ctor
}

Race::~Race()
{
    for (auto animal : animals)
    {
        delete animal;
    }
}

void Race::competition()
{
    //Racing loop
    while (!raceFinished())
    {

        for (Animal* tmpAnimal : animals)
        {
            tmpAnimal->run();
        }

        // try catch block
        try
        {
            trickEachother();
        }
        catch (const std::invalid_argument& ex)
        {
            std::cout << std::endl << ex.what();
        }
        catch (const std::logic_error& ex)
        {
            std::cout << std::endl << ex.what();
        }
        
    }

    printResult();
}
