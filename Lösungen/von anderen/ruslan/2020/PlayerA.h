//
// Created by Ruslan Kotliarenko on 16.06.24.
//

#ifndef INC_2020_PLAYERA_H
#define INC_2020_PLAYERA_H


#include "IPlayer.h"

class PlayerA : public IPlayer {
    public:
        // Constructor
        PlayerA(std::string name);

        bool attack(IPlayer *target) override;
        double beAttacked() override;
};


#endif//INC_2020_PLAYERA_H
