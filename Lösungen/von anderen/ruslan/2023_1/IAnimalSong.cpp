//
// Created by Ruslan Kotliarenko on 22.06.24.
//

#include "IAnimalSong.h"
IAnimalSong::IAnimalSong() {}

int IAnimalSong::play(
    const std::vector<std::unique_ptr<IAnimalSong>>& songs, int index
) {
  return 0;
}

char IAnimalSong::getTypeChar() {
  return 'A';
}

bool IAnimalSong::isValidSongChoice(int songsSize, int index) const {
  std::cout << "index: " << index << " and size: " << songsSize << std::endl;
  return (index >= 0 && index < songsSize);
}
