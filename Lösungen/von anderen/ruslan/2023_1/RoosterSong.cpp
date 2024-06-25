//
// Created by Ruslan Kotliarenko on 22.06.24.
//

#include "RoosterSong.h"
RoosterSong::RoosterSong() : IAnimalSong() {}

char RoosterSong::getTypeChar() { return 'R'; }

int RoosterSong::play(
    const std::vector<std::unique_ptr<IAnimalSong>>& songs, int index
) {
    if (!isValidSongChoice(songs.size(), index)) {
        throw std::invalid_argument("Rooster song index out of bounds.");
    }

    int counter = 0;
    for (int i = 0; i < songs.size(); ++i) {
        if (songs[i]->getTypeChar() == 'R') counter++;
    }

    if (counter == 1) return 3;
    else return 0;
}