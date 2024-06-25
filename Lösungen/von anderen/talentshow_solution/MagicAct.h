#ifndef MAGICACT_H
#define MAGICACT_H
#include "AbstractAct.h"
class MagicAct:public AbstractAct
{
      public: 
	    MagicAct(int intensity):AbstractAct(intensity){ act_type='M'; }
	    char getType()override{return act_type;} 
	    virtual int getValue(const std::vector<AbstractAct*>& program,int index)override;
};
#endif

