//
// Created by Ruslan Kotliarenko on 22.06.24.
//

#ifndef INC_2023_1_ROOSTERSONG_H
#define INC_2023_1_ROOSTERSONG_H

#include "IAnimalSong.h"

class RoosterSong : public IAnimalSong {
  public:
    RoosterSong();

    char getTypeChar() override;
    int play(
        const std::vector<std::unique_ptr<IAnimalSong>>& songs, int index
    ) override;
};

#endif // INC_2023_1_ROOSTERSONG_H
