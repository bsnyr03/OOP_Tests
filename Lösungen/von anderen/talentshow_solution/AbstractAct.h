#ifndef ABSTRACTACT_H
#define ABSTRACTACT_H
#include <stdexcept>
#include <vector>
class TalentShow;
class AbstractAct 
{
      public: 
	    AbstractAct(int intensity); 
	    virtual char getType(){return act_type;} 
	    virtual int getValue(const std::vector<AbstractAct*>& program,int index)=0;
      protected:

	    int intensity;
	    char act_type;
};
#endif
