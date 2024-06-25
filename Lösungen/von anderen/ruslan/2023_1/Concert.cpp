#include "Concert.h"

#include "DogSong.h"
#include "CatSong.h"
#include "RoosterSong.h"

Concert::Concert(std::string songString)
{
    for(char s : songString)
    {
        switch(s)
        {
        case 'C':
            songs.push_back(std::make_unique<CatSong>());
            break;
        case 'D':
            songs.push_back(std::make_unique<DogSong>());
            break;
        case 'R':
            songs.push_back(std::make_unique<RoosterSong>());
            break;
        }
    }
}

int Concert::play() {
    int sum = 0;
    for (int i = 0; i < songs.size(); ++i) {
        try {
            sum += songs[i]->play(songs, i);
        } catch (const std::exception& e) {
            std::cerr << "Exception in play: " << e.what() << std::endl;
        } catch (...) { // This catches any other type of exception or object
            std::cerr << "Unknown exception in play" << std::endl;
        }
    }
    return sum;
}