#include "MagicAct.h"

MagicAct::MagicAct(int intensity): AbstractAct(intensity)
{
    //ctor
}

MagicAct::~MagicAct()
{
    //dtor
}

char MagicAct::getType()
{
    return 'M';
}

int MagicAct::getValue(std::vector<AbstractAct*>& program, int index)
{
    if (index < 0 || index >= static_cast<int>(program.size()))
    {
        throw std::out_of_range("Der übergebene Index ist außerhalb der Grenzen der übergebenen Vektor-Referenz");
    }

    if (index > 0 && program[index - 1]->getType() == 'M')
    {
        return intensity / 2; // Halber Intensitätswert, wenn der vorherige Auftritt ein MagicAct war
    }
    else
    {
        return intensity;
    }
}
