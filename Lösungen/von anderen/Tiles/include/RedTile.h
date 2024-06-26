#ifndef REDTILE_H
#define REDTILE_H

#include <Tile.h>


class RedTile : public Tile
{
    public:
        RedTile();
        void mark();
        char getColor();


    protected:

    private:
};

#endif // REDTILE_H
