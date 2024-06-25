#include "Bankdruecken.h"

Bankdruecken::~Bankdruecken()
{
    //dtor
}
Bankdruecken::Bankdruecken(int gewicht)
{

    this->Gewicht = gewicht;
}
bool Bankdruecken::train(Mensch& mensch)
{
    //  Ist das Gewicht kleiner als die Oberk¨orperkraft
    if(this->Gewicht<mensch.Oberkoerperkraft)
    {
        //   wird eine Meldung ausgeben
        std::cout <<  " dass die Ubung geschafft wurde und die Oberkoerperkraft des Menschen um 1 erhoeht\n";
        //  dann wird true zur¨uckgegeben
        mensch.Oberkoerperkraft++;
        return true;
    }
    //  Ist das Gewicht kleiner als die doppelte Oberk¨orperkraft
    if(this->Gewicht < (2*mensch.Oberkoerperkraft))
    {
        //  wird eine Meldung ausgegeben, dass die Ubung ger- ¨
        // ade noch geschafft wurde und die Oberk¨orperkraft des Menschen um 3 erh¨oht
        mensch.Oberkoerperkraft+=3;

        return true;
    }
    // . Ansonsten wird eine Meldung ausgegeben, dass die Ubungunm¨oglich ist und false zur¨uckgegeben
        std::cout << "dass die Ubung unmoglich ist\n";
        return false;

}







