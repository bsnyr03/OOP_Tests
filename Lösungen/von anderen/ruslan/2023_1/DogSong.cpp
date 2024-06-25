//
// Created by Ruslan Kotliarenko on 22.06.24.
//

#include "DogSong.h"
DogSong::DogSong() : IAnimalSong() {}

char DogSong::getTypeChar() { return 'D'; }

int DogSong::play(
    const std::vector<std::unique_ptr<IAnimalSong>>& songs, int index
) {
    if (!isValidSongChoice(songs.size(), index)) {
        throw std::invalid_argument("Dog song index out of bounds.");
    }

    int prevIndex = index - 1,
        nextIndex = index + 1;

    if (
            (isValidSongChoice(songs.size(), prevIndex) && songs[prevIndex]->getTypeChar() == 'C') ||
            (isValidSongChoice(songs.size(), nextIndex) && songs[nextIndex]->getTypeChar() == 'C')
    ) {
        return 0;
    } else {
        return 1;
    }
}