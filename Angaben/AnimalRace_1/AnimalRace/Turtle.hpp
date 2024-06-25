//
//  Turtle.hpp
//  AnimalRace
//
//  Created by John Kulha on 22.06.23.
//

#ifndef Turtle_hpp
#define Turtle_hpp

#include <string>
#include "Animal.hpp"

class Turtle: public Animal {
public:
    Turtle(std::string name, int distance);
    void run() override;
};

#endif /* Turtle_hpp */
