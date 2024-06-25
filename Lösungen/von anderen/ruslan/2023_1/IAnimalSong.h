//
// Created by Ruslan Kotliarenko on 22.06.24.
//

#ifndef INC_2023_1_IANIMALSONG_H
#define INC_2023_1_IANIMALSONG_H

#include <vector>
#include <memory>
#include <algorithm>
#include <iostream>

class IAnimalSong {
  public:
    IAnimalSong();

    virtual int play(const std::vector<std::unique_ptr<IAnimalSong>>& songs, int index);
    virtual char getTypeChar();

    bool isValidSongChoice(int songsSize, int index) const;
};

#endif // INC_2023_1_IANIMALSONG_H
