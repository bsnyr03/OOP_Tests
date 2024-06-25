#ifndef ACROBATICACT_H
#define ACROBATICACT_H

#include "AbstractAct.h"

class AcrobaticAct: public AbstractAct
{
    public:
        AcrobaticAct(int intensity) : intensity(intensity){};
        virtual ~AcrobaticAct();

        char getType() const override;

        int getValue(const std::vector<AbstractAct*>&program, int index) const override;

    private:
        int intensity;
};

#endif // ACROBATICACT_H
