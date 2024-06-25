#include "Race.h"

void Race::competition()
{
    //Racing loop
    while(!raceFinished())
    {

        for (int i = 0; i < animals.size(); ++i)
        {
            animals[i]->run();
        }

        try {
          trickEachother();
        } catch (std::exception& e) {
          std::cout << "Error when tricking: " << e.what() << std::endl;
        }
    }

    printResult();
}

void Race::addAnimal(std::unique_ptr<Animal> animal) {
    animals.emplace_back(std::move(animal));
}

bool Race::raceFinished() {
    for (int i = 0; i < animals.size(); ++i) {
        if (animals[i]->atGoal()) return true;
    }
    return false;
}

void Race::printResult() const {
    for (int i = 0; i < animals.size(); ++i) {
        std::cout << animals[i]->getName() << ": " << animals[i]->getDistance
                                                      () << std::endl;
    }
}
void Race::trickEachother() {
    for (int i = 0; i < animals.size(); ++i) {
        int targetIndex = i;
        while (i == targetIndex) {
            targetIndex = generateRandomNumber(0, animals.size() - 1);
        }

        animals[i]->trick(animals[targetIndex].get());
    }
}
