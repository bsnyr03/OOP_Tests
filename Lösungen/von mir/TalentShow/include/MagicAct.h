#ifndef MAGICACT_H
#define MAGICACT_H

#include "AbstractAct.h"

class MagicAct : public AbstractAct
{
    public:
        MagicAct(int intensity): intensity(intensity){};
        virtual ~MagicAct(){};

        char getType () const override;

        int getValue(const std::vector<AbstractAct*>&program, int index) const override;

    private:
        int intensity;
};

#endif // MAGICACT_H
