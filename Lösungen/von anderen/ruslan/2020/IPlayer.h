#ifndef IPLAYER_H
#define IPLAYER_H

#include <iostream>
#include <cstdlib>
#include "helpers.h"

class IPlayer
{
    public:
        IPlayer(std::string name);
        virtual ~IPlayer();
        void rest();
        int getPoints();
        int getAttack();
        int getDefense();
        std::string getName();

        bool operator>(IPlayer *target) {
            if (target == nullptr) {
                throw std::invalid_argument("Target in NULL.");
            }

            return this->getPoints() > target->getPoints();
        }

        virtual double beAttacked();
        virtual bool attack(IPlayer *target);

    protected:
        int points;
        int defensePoints;
        int attackPoints;
        int attackBonus;
        int stamina;
        std::string name;
};

#endif // IPLAYER_H
