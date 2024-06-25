#include "MagicAct.h"

int MagicAct::getValue(const std::vector<AbstractAct*>& program, int index) {

      if(index<0||index>=program.size())
      {
	    throw std::out_of_range("Index is out of range");
      }
      if(index>0&&program[index-1]->getType()=='M')
      {
	    return intensity/2;
      }else{
	    return intensity;
      }
}

