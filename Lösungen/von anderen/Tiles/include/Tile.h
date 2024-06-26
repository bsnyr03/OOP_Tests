#ifndef TILE_H
#define TILE_H


class Tile
{
    public:
        virtual char getColor() = 0;
        bool isMarked();  //Return if the tile is marked for replacement
        void display();   //Prints one character for the color
        virtual void mark() = 0;
        bool getMarked();
        void setMarked(bool marked);

    protected:
        bool marked;


    private:

};

#endif // TILE_H
