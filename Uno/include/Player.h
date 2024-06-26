#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include <memory>

#include "Card.h"

class Player
{
    public:
        Player(const std::string& name);

        void addCard(std::shared_ptr<Card> card);

        Player& operator+=(std::shared_ptr<Card> card);

        void showCards() const;

        std::string getName() const;

    private:
        std::string name;
        std::vector<std::shared_ptr<Card>> playerDeck;
};

#endif // PLAYER_H
