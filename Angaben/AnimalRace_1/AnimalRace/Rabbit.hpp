//
//  Rabbit.hpp
//  AnimalRace
//
//  Created by John Kulha on 22.06.23.
//

#ifndef Rabbit_hpp
#define Rabbit_hpp

#include <string>
#include "Animal.hpp"

class Rabbit: public Animal {
public:
    Rabbit(std::string name, int distance);
    void run() override;
protected:
    bool isSlepping;
};

#endif /* Rabbit_hpp */
