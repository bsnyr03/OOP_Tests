#include "Tile.h"
#include <iostream>


bool Tile::isMarked()
{
    return marked;
}

void Tile::display()
{
    std::cout << getColor() << " ";
}


