#include "Player.h"

Player::Player(const std::string& name)
{

}

void Player::addCard(std::shared_ptr<Card> card){
    playerDeck.push_back(card);
}

Player& Player::operator+=(std::shared_ptr<Card> card){
    addCard(card);
    return *this;
}

void Player::showCards() const {
    std::cout << "Spieler: " << name << "\n";
    for (const auto &card : playerDeck){
        card->printCard();
    }
}

std::string Player::getName() const{
    return name;
}
