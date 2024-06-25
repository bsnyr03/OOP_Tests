//
// Created by Ruslan Kotliarenko on 16.06.24.
//


#include "PlayerA.h"

namespace PLAYER_A_DEFAULT_VALUES {
    int ATTACK_BONUS = 0;
    int ATTACK_POINTS = 40;
    int DEFENSE_POINTS = 60;
    int POINTS = 0;
    int STAMINA = 100;
};

PlayerA::PlayerA(std::string name) : IPlayer(std::move(name)) {
    this->attackBonus = PLAYER_A_DEFAULT_VALUES::ATTACK_BONUS;
    this->attackPoints = PLAYER_A_DEFAULT_VALUES::ATTACK_POINTS;
    this->defensePoints = PLAYER_A_DEFAULT_VALUES::DEFENSE_POINTS;
    this->points = PLAYER_A_DEFAULT_VALUES::POINTS;
    this->stamina = PLAYER_A_DEFAULT_VALUES::STAMINA;
};

bool PlayerA::attack(IPlayer *target) {
    if (target == nullptr) {
        throw std::invalid_argument("Target in NULL.");
    }

    this->attackBonus = this->attackBonus + generateRandomNumber(0, 4);

    double tmpAttackValue = (this->attackBonus + this->attackPoints) * target->beAttacked();

    if (tmpAttackValue > target->getDefense()) {
        this->points++;
        return true;
    }

    return false;
};

double PlayerA::beAttacked() {
    this->stamina = std::max(this->stamina - 3, 0);

    if (this->stamina % 7 == 0) {
        return 5;
    } else if (this->stamina % 5 == 0) {
        return 3;
    } else if (this->stamina % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}