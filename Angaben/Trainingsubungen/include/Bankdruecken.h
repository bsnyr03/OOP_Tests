#ifndef BANKDRUECKEN_H
#define BANKDRUECKEN_H


#include "Uebung.h"
#include "Mensch.h"

class Mensch;

class Bankdruecken : public Uebung
{
    public:
        /** Default constructor */
        // Bankdruecken();
        Bankdruecken(int gewicht);
        /** Default destructor */
        virtual ~Bankdruecken();
        //bool train(Mensch mensch_ptr) ;
        bool train(Mensch& mensch) override;
    protected:

    private:
};

#endif // BANKDRUECKEN_H
