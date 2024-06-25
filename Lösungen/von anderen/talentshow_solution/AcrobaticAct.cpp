#include "AcrobaticAct.h"

int AcrobaticAct::getValue(const std::vector<AbstractAct*>& program, int index) {
      if(index < 0 || index >= program.size()) {
	    throw std::out_of_range("Index is out of range");
      }

      int acrobaticActCount = 0;
      for (int i = 0; i < index; ++i) {
	    if (program[i]->getType() == 'A') {
		  ++acrobaticActCount;
	    }
      }

      if (acrobaticActCount < 3) {
	    // This is one of the first three acrobatic acts
	    return intensity;
      } else {
	    return 1;
      }
}


