//
// Created by Ruslan Kotliarenko on 16.06.24.
//

#include "PlayerB.h"

namespace PLAYER_B_DEFAULT_VALUES {
    int ATTACK_BONUS = 0;
    int ATTACK_POINTS = 45;
    int DEFENSE_POINTS = 55;
    int POINTS = 0;
    int STAMINA = 100;
};

using namespace PLAYER_B_DEFAULT_VALUES;

PlayerB::PlayerB(std::string name) : IPlayer(std::move(name)) {
    this->attackBonus = PLAYER_B_DEFAULT_VALUES::ATTACK_BONUS;
    this->attackPoints = PLAYER_B_DEFAULT_VALUES::ATTACK_POINTS;
    this->defensePoints = PLAYER_B_DEFAULT_VALUES::DEFENSE_POINTS;
    this->points = PLAYER_B_DEFAULT_VALUES::POINTS;
    this->stamina = PLAYER_B_DEFAULT_VALUES::STAMINA;
};

bool PlayerB::attack(IPlayer *target) {
    if (target == nullptr) {
        throw std::invalid_argument("Target in NULL.");
    }

    int toChangeConfused = generateRandomNumber(0, 100) <= 30;
    if (toChangeConfused) this->confused = !this->confused;

    if (!this->confused) {
        this->attackBonus = 5 * target->beAttacked();
    }

    int tmpAttackValue = this->attackBonus + this->attackPoints;

    if (tmpAttackValue > target->getDefense()) {
        this->points++;
        return true;
    }

    return false;
};

double PlayerB::beAttacked() {
    int ratio = this->confused ? 5 : 20;
    this->stamina -= (this->stamina / ratio);

    return (this->stamina > 30 ? 0 : 1);
}