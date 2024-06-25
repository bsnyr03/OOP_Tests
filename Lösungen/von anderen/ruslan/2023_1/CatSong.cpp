//
// Created by Ruslan Kotliarenko on 22.06.24.
//

#include "CatSong.h"

CatSong::CatSong() : IAnimalSong() {}

char CatSong::getTypeChar() {
  return 'C';
}

int CatSong::play(
    const std::vector<std::unique_ptr<IAnimalSong>>& songs, int index
) {
  if (!isValidSongChoice(songs.size(), index)) {
      throw std::invalid_argument("Cat song index out of bounds.");
  }

  int counter = 0;
  for (int i = 0; i < songs.size(); ++i) {
      if (songs[i]->getTypeChar() == 'D') counter++;
  }

  return 5 - counter;
}
