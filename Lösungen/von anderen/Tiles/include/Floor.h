#ifndef FLOOR_H
#define FLOOR_H
#include <array>
#include "Tile.h"

class Floor
{
    public:
        Floor();
        virtual ~Floor();
        void print();
        void mark(int x, int y);
        void replace(int x, int y);
        bool isRed();

    protected:

    private:
        std::array<std::array<Tile*,3>,3> tiles;
};

#endif // FLOOR_H
