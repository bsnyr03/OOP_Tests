#include "BlueTile.h"
#include <cstdlib>

BlueTile::BlueTile()
{
    int randomNumber = std::rand() % 2;
    if (randomNumber == 0)
    {
        marked = true;
    }
    else
    {
        marked = false;
    }
}

void BlueTile::mark()
{
    marked = true;
}

char BlueTile::getColor()
{
    return 'B';
}
