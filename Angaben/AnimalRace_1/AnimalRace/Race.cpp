#include "Race.hpp"
#include <iostream>

Race::Race()
{
    //ctor
}

Race::~Race()
{
    //dtor
    for (Animal* animal: animals) {
        delete animal;
    }
}

void Race::competition()
{
    //Racing loop
    while(!raceFinished())
    {

        for(Animal* tmpAnimal: animals)
        {
            tmpAnimal->run();
        }

        // try catch block
        try {
            trickEachother();
        } catch (std::invalid_argument& e) {
            std::cout << e.what() << std::endl;
        } catch (std::logic_error& e) {
            std::cout << e.what() << std::endl;
        } catch(...) {
            std::cout << "unknown error" << std::endl;
        }
        
    }

    printResult();
}

void Race::addAnimal(Animal* animal) {
    animals.push_back(animal);
}

bool Race::raceFinished() {
    // Lange Variante:
    /*for (int i = 0; i < animals.size(); i++) {
        Animal* animal = animals[i];
        // ...
    }*/
    
    // Kurze Variante
    for(auto animal: animals) {
        if (animal->atGoal()) {
            return true;
        }
    }
    
    return false;
}

void Race::printResult() {
    for (auto animal: animals) {
        std::cout << animal->getName() << " has distance "<< animal->getDistance() << std::endl;
    }
}

void Race::trickEachother() {
    for (int i = 0; i < animals.size(); i++) {
        auto animal = animals[i];
        int randomIndex = rand() % animals.size();
        while (randomIndex == i) {
            randomIndex = rand() % animals.size();
        }
        
        animal->trick(animals[randomIndex]);
    }
}
