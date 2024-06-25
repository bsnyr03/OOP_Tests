#include "MagicAct.h"

int MagicAct::getValue(const std::vector<AbstractAct*>&program, int index) const override {

    if(index < 0 || index >= static_cast<int>(program.size())){
        throw std::out_of_range("Index out of range");
    }

    if (index > 0 && program[index - 1]->getType() == 'M' ){
        return intensity / 2;
    }
    return intensity;
}

char MagicAct::getType() const override{
    return 'M';
}
