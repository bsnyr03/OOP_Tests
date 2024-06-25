#ifndef ACROBATICACT_H
#define ACROBATICACT_H

#include "AbstractAct.h"
class AcrobaticAct: public AbstractAct
{
    public:

        AcrobaticAct(int intensity);
        virtual ~AcrobaticAct();
        char getType()override;
        int getValue(vector<AbstractAct*>& program,int index);

    protected:

    private:
};

#endif // ACROBATICACT_H
