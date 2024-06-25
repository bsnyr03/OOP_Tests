#include "AbstractAct.h"

AbstractAct::AbstractAct(int intensity): intensity(intensity)
{
    //ctor
}

AbstractAct::~AbstractAct()
{
    //dtor
}


char AbstractAct::getType()
{
    return act_type;
}
