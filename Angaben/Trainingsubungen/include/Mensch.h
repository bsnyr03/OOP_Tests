#ifndef MENSCH_H
#define MENSCH_H
#include <iostream>
#include "Uebung.h"
#include "Bankdruecken.h"
class Uebung;
class Bankdruecken;
//class Kniebeugen;
#include "Kniebeugen.h"
class Mensch
{
    public:
        /** Default constructor */

        Mensch(int oberkoerperkraft, int beinkraft);
        /** Default destructor */
        virtual ~Mensch();

        void chooseExercise();
        bool train();

        int Oberkoerperkraft;
        int Beinkraft;
        Uebung * ubung;
    protected:


    private:
};

#endif // MENSCH_H
