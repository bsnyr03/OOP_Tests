#include "AcrobaticAct.h"

char AcrobaticAct::getType() const override {
    return 'A';
}

int AcrobaticAct::getValue(const std::vector<AbstractAct*>&program,int index) const override{

    if (index < 0 || index >= static_cast<int>(program.size())){
        throw std::out_of_range("index out of range")
    }

    int acrobaticCounter = 0;

    for (int i = 0; i <=index; i++){
        if (program[i]->getType() == 'A'){
            acrobaticCounter ++;
            if (acrobaticCounter == 3){
                return 1;
            }
        }
    }

    return intensity;

}
