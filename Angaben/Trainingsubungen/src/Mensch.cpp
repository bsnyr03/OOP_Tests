#include "Mensch.h"



Mensch::Mensch(int oberkoerperkraft, int beinkraft):Oberkoerperkraft(oberkoerperkraft),  Beinkraft(beinkraft)
{
    this->Oberkoerperkraft = oberkoerperkraft;
    this->Beinkraft = beinkraft;
    ubung = nullptr;
}

Mensch::~Mensch()
{
    //dtor
}

void Mensch::chooseExercise()
{
    if(this->ubung !=nullptr)
    {
        delete this->ubung ;
    }
    std::cout << "Bankdruecken oder Kniebeugen(1,2)?\n";
    int input_type=0;
    std::cin >> input_type;
    std::cout << "Wieviel Gewicht?\n";
    int input_gewicht=0;
    std::cin >> input_gewicht;
    Uebung * newUebung = nullptr;
    if(input_type==1)
    {
        newUebung = new Bankdruecken(input_gewicht);
    }
    else if(input_type==2)
    {
        newUebung =  new Kniebeugen(input_gewicht);

    }
    this->ubung  = newUebung;
}

bool Mensch::train()
{
    if(this->ubung==nullptr)
    {
        std::cout << "Es gibt kein Uebung!\n";
        return false;
    }
    ubung->train(*this);

    std::cout << "Werte von Oberkoerper- und Beinkraft\n" << this->Oberkoerperkraft
    <<   " und " << this->Beinkraft << std::endl;
    int input=0;
    std::cin >> input;
    if(input ==1)
    {
        return true;
    }
    return false;
}







