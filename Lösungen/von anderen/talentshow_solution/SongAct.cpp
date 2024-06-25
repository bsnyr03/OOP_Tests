#include "SongAct.h"


int SongAct::getValue(const std::vector<AbstractAct*>& program, int index) {
    if(index < 0 || index >= program.size()) {
        throw std::out_of_range("Index is out of range");
    }
    if((index > 0 && program[index-1]->getType() == 'A') || 
       (index > 1 && program[index-2]->getType() == 'A') || 
       (index > 2 && program[index-3]->getType() == 'A')) {
        return intensity + 3;
    } else {
        return intensity;
    }
}
