#ifndef CONCERT_H
#define CONCERT_H

#include "IAnimalSong.h"

class Concert
{
    public:
        Concert(std::string);
        int play();

    private:
        std::vector<std::unique_ptr<IAnimalSong>> songs;
};

#endif // CONCERT_H
