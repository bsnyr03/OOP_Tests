#ifndef BLUETILE_H
#define BLUETILE_H

#include <Tile.h>


class BlueTile : public Tile
{
    public:
        BlueTile();
        void mark();
        char getColor();

    protected:

    private:
};

#endif // BLUETILE_H
