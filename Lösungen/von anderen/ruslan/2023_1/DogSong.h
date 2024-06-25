//
// Created by Ruslan Kotliarenko on 22.06.24.
//

#ifndef INC_2023_1_DOGSONG_H
#define INC_2023_1_DOGSONG_H

#include "IAnimalSong.h"

class DogSong : public IAnimalSong {
  public:
    DogSong();

    char getTypeChar() override;
    int play(
        const std::vector<std::unique_ptr<IAnimalSong>>& songs, int index
    ) override;
};

#endif // INC_2023_1_DOGSONG_H
