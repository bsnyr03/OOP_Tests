#ifndef ABSTRACTACT_H
#define ABSTRACTACT_H


#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <stdexcept>

//#include "TalentShow.h"
class TalentShow;

using namespace std;

class AbstractAct
{
    public:
        AbstractAct(int intensity);
        virtual ~AbstractAct();
        virtual char getType();
        virtual int getValue(vector<AbstractAct*>& program,int index)=0;


    protected:
        int intensity;
        char act_type;

    private:
};

#endif // ABSTRACTACT_H






