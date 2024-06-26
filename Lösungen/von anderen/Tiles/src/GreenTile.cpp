#include "GreenTile.h"

GreenTile::GreenTile()
{
    marked = true;
}

void GreenTile::mark()
{
    marked = true;
}

char GreenTile::getColor()
{
    return 'G';
}
