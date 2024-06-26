#include "Game.h"

Game::Game()
{
    deck.reserve(44);
}

void Game::addPlayerByName(const std::string& name){
    players.emplace_back(name);
}

void Game::createCards(){
    std::vector<std::string> colors = {"rot", "gruen", "gelb", "blau"};


    for (const auto& color: colors){
        for(int number=0; number <= 9; number++){
            deck.push_back(std::make_shared<NumberCard>(color, number));
        }
    }

    deck.push_back(std::make_shared<SpecialCard>("schwarz", "+4"));
    deck.push_back(std::make_shared<SpecialCard>("schwarz", "+4"));
    deck.push_back(std::make_shared<SpecialCard>("schwarz", "andereFarbe"));
    deck.push_back(std::make_shared<SpecialCard>("schwarz", "andereFarbe"));
}

void Game::shuffleCards(){
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(deck.begin(), deck.end(), g);
}

void Game::dealCards(){
    if (players.empty()){
        throw std::logic_error("Es gibt keine Spieler");
    }

    const int cardsPerPlayer = 7;
    if (deck.size() < players.size()* cardsPerPlayer){
        throw std::logic_error("Nicht genug Karten im deck");
    }

    for (auto& player: players){
        for(int i = 0; i<cardsPerPlayer; i++){
            player.addCard(deck.back());
            deck.pop_back();
        }
    }
}

void Game::startGame(){
    createCards();
    shuffleCards();
    dealCards();
}

void Game::showPlayerCards() const{
    for (const auto& player : players){
        player.showCards();
    }
}

void Game::showDeckCards() const {
    std::cout << "Folgende Karten im Deck:\n";
    for (const auto& card : deck){
        card->printCard();
    }
}
