
#include "SongAct.h"

SongAct::SongAct(int intensity): AbstractAct(intensity)
{
    //ctor
}

SongAct::~SongAct()
{
    //dtor
}
char SongAct::getType()
{
    return 'S';
}

int SongAct::getValue(std::vector<AbstractAct*>& program, int index)
{
    if (index < 0 || index >= static_cast<int>(program.size()))
    {
        throw std::out_of_range("Der übergebene Index ist außerhalb der Grenzen der übergebenen Vektor-Referenz");
    }

    if (index >= 3 && program[index - 3]->getType() == 'S')
    {
        return intensity + 3;
    }
    else
    {
        return intensity;
    }
}
