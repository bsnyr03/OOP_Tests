#include "RedTile.h"

RedTile::RedTile()
{
    marked = false;
}

void RedTile::mark()
{
    marked = false;
}

char RedTile::getColor()
{
    return 'R';
}
