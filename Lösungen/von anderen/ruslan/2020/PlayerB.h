//
// Created by Ruslan Kotliarenko on 16.06.24.
//

#ifndef INC_2020_PLAYERB_H
#define INC_2020_PLAYERB_H

#include "IPlayer.h"

class PlayerB : public IPlayer {
    public:
        // Constructor
        PlayerB(std::string name);

        bool attack(IPlayer *target) override;
        double beAttacked() override;

    private:
        bool confused = false;
};


#endif//INC_2020_PLAYERB_H
