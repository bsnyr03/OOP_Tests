#ifndef GAME_H
#define GAME_H

#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include <memory>
#include <stdexcept>
#include "Card.h"
#include "NumberCard.h"
#include "SpecialCard.h"
#include "Player.h"

class Game
{
public:
    Game();

    void addPlayerByName(const std::string& name);

    void createCards();

    void shuffleCards();

    void dealCards();

    void startGame();

    void showPlayerCards() const;

    void showDeckCards() const;

private:
    std::vector<std::shared_ptr<Card>> deck;
    std::vector<Player> players;

};

#endif // GAME_H
