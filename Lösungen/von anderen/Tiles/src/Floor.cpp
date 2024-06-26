#include "Floor.h"
#include "GreenTile.h"
#include "BlueTile.h"
#include <iostream>
#include <stdexcept>

Floor::Floor()
{
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int randomNumber = rand() % 2;
            if (randomNumber == 0)
            {
                tiles[i][j] = new GreenTile;
            }
            else
            {
                tiles[i][j] = new BlueTile;
            }
        }
    }
}

Floor::~Floor()
{
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            delete tiles[i][j];
        }
    }
}

void Floor::print()
{
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tiles[i][j]->display();
        }
        std::cout << std::endl;
    }
}

void Floor::mark(int x, int y)
{
    if (x < 0 || y < 0 || x > 2 || y > 2)
    {
        throw std::invalid_argument("out of bounds");
    }
    tiles[x][y]->mark();
}

void Floor::replace(int x, int y)
{
    if (x < 0 || y < 0 || x > 2 || y > 2)
    {
        throw std::invalid_argument("out of bounds");
    }
    if (tiles[x][y]->getColor() == 'G')
    {
        delete tiles[x][y];
        tiles[x][y] = new BlueTile;
    }
    else if (tiles[x][y]->getColor() == 'B' && tiles[x][y]->isMarked())
    {
        delete tiles[x][y];
        tiles[x][y] = new GreenTile;
    }

}

bool Floor::isRed()
{
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (tiles[i][j]->getColor() == 'R')
            {
                return false;
            }
        }
    }
    return true;
}
