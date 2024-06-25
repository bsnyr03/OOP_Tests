#ifndef MAGICACT_H
#define MAGICACT_H

#include"AbstractAct.h"

class MagicAct : public AbstractAct
{
    public:
         MagicAct(int intensity);
        virtual ~MagicAct();
        char getType() override;
        int getValue(vector<AbstractAct*>& program,int index);

    protected:

    private:
};

#endif // MAGICACT_H
