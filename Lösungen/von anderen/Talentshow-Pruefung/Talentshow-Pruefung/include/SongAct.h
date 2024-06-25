#ifndef SONGACT_H
#define SONGACT_H

#include"AbstractAct.h"

class SongAct: public AbstractAct
{
    public:
        SongAct(int intensity);
        virtual ~SongAct();
        char getType()override;
        int getValue(vector<AbstractAct*>& program,int index);

    protected:

    private:
};

#endif // SONGACT_H
