#ifndef UEBUNG_H
#define UEBUNG_H
//#include "Mensch.h"
class Mensch;

class Uebung
{
    public:
        /** Default constructor */
        Uebung();
        /** Default destructor */
        virtual ~Uebung();
        virtual bool train(Mensch& mensch)=0;

        int Gewicht;
    protected:
    private:
};

#endif // UEBUNG_H
