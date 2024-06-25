//
//  Animal.hpp
//  AnimalRace
//
//  Created by John Kulha on 22.06.23.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <string>

class Animal  {
public:
    Animal(std::string name, int distance);
    virtual ~Animal();
    virtual void run() = 0;
    bool atGoal();
    void trick(Animal* other);
    std::string getName();
    int getDistance();
    
protected:
    std::string name;
    int distance;
    bool confused;
};

#endif /* Animal_hpp */
