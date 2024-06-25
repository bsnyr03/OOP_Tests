#include "SongAct.h"

char SongAct::getType() const override{
    return 'S';
}

int SongAct::getValue(const std::vector<AbstractAct*>&program, int index) const override{

    if (index < 0 || index >= static_cast<int>(program.size())){
        throw std::out_of_range("Index out of range");
    }

    for (int i = 0; i<=3; i++){
        if(index - i >= 0 && program[index-1]->getType()== 'A'){
                return intensity +3;
        }
    }
    return intensity;
}
