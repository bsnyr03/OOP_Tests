#include "Kniebeugen.h"

Kniebeugen::Kniebeugen(int gewicht)
{
    //ctor
    this->Gewicht = gewicht;
}

Kniebeugen::~Kniebeugen()
{
    //dtor
}


bool Kniebeugen::train(Mensch & mensch){
    // Ist das Gewicht kleiner als die Unterk¨orperkraft wird

    if(this->Gewicht < mensch.Beinkraft){
        // eine Meldung ausgeben, dass die Ubung geschafft wurde und die Unterk¨orperkraft
        std::cout << "die Ubung geschafft wurde und die Unterkorperkraft des Menschen um 1 erhoht\n";
        mensch.Beinkraft++;
        return true;
    }
    // n. Ist das Gewicht kleiner als die doppelte Unterk¨orperkraft
    if(this->Gewicht < (2*mensch.Beinkraft)){
        std::cout << "die Ubung gerade noch geschafft wurde und die Unterk¨orperkraft des Menschen um 3 erhoht\n";
        // dann wird true zur¨uckgegeben
        mensch.Beinkraft+=3;
        return true;

    }
    std::cout << "Ansonsten wird eine Meldung ausgegeben, dass die Ubung unmoglich ist\n";
    //  false zur¨uckgegeben

    return false;
}








