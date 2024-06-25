#ifndef SONGACT_H
#define SONGACT_H

#include "AbstractAct.h"

class SongAct : public AbstractAct
{
    public:
        SongAct(int intensity) : intensity(intensity){};
        virtual ~SongAct();

        char getType() const override;
        int getValue(const std::vector<AbstractAct*>&program, int index) const override;

    private:
        int intensity;
};

#endif // SONGACT_H
