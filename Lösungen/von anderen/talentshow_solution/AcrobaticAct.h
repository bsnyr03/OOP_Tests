#ifndef ACROBATICACT_H
#define ACROBATICACT_H
#include "AbstractAct.h"
class AcrobaticAct:public AbstractAct
{
      public: 
	    AcrobaticAct(int intensity):AbstractAct(intensity){ act_type='A'; }
	    char getType()override{return act_type;} 
	    virtual int getValue(const std::vector<AbstractAct*>& program,int index)override;
};
#endif

