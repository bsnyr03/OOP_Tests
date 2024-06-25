#ifndef SONGACT_H
#define SONGACT_H
#include "AbstractAct.h"
class SongAct:public AbstractAct
{
      public: 
	    SongAct(int intensity):AbstractAct(intensity){ act_type='S'; }
	    char getType()override{return act_type;} 
	    virtual int getValue(const std::vector<AbstractAct*>& program,int index)override;
};
#endif

