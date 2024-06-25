#ifndef KNIEBEUGEN_H
#define KNIEBEUGEN_H

#include <Uebung.h>
#include "Mensch.h"

class Kniebeugen : public Uebung
{
    public:
        /** Default constructor */
        Kniebeugen(int gewicht);
        /** Default destructor */
        virtual ~Kniebeugen();
        bool train(Mensch & mensch_ptr) override;
    protected:

    private:
};

#endif // KNIEBEUGEN_H
