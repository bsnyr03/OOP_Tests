#include "AcrobaticAct.h"

AcrobaticAct::AcrobaticAct(int intensity): AbstractAct(intensity)
{
    //ctor
}

AcrobaticAct::~AcrobaticAct()
{
    //dtor
}

char AcrobaticAct::getType()
{

    return 'A';
}


int AcrobaticAct::getValue(std::vector<AbstractAct*>& program, int index)
{
    if (index < 0 || index >= static_cast<int>(program.size()))
    {
        throw std::out_of_range("Der übergebene Index ist außerhalb der Grenzen der übergebenen Vektor-Referenz");
    }

    int acrobaticActCount = 0;
    for (int i = 0; i < index; ++i)
    {
        if (program[i]->getType() == 'A')
        {
            ++acrobaticActCount;
        }
    }

    if (acrobaticActCount < 3)
    {
        // Dies ist einer der ersten drei Akrobatikauftritte
        return intensity;
    }
    else
    {
        return 1;
    }
}
