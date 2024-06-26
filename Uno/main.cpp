#include <iostream>
#include <array>
#include "NumberCard.h"
#include "SpecialCard.h"
#include "Player.h"
#include "Game.h"

void Test1_NumberCard()
{
    auto tmp = std::make_shared<NumberCard>("red", 9);
    tmp->printCard();
}

void Test2_Player()
{
    auto card1 = std::make_shared<NumberCard>("red", 9);
    auto card2 = std::make_shared<NumberCard>("blue", 4);

    Player p1("Max");

    p1.addCard(card1);
    p1 += card2;

    p1.showCards();
}

void Test3_Game()
{
    std::array<std::string, 8> names =
    {
        "Mustermann",
        "Max",
        "John",
        "Jane",
        "Tim",
        "Kim",
        "Andreas",
        "Andrea"
    };

    Game myGame;
    int numberPlayers = 2;

    for(int i = 0; i < numberPlayers; ++i)
    {
        myGame.addPlayerByName(names[i]);
    }

    myGame.startGame();
    myGame.showDeckCards();
}

int main()
{
    // 3 simple tests just to help
    //
    Test1_NumberCard();
    Test2_Player();
    Test3_Game();

    // example code - this should work
    // add exception handling in the code below
    try {
        std::array<std::string, 8> names =
        {
            "Mustermann",
            "Max",
            "John",
            "Jane",
            "Tim",
            "Kim",
            "Andreas",
            "Andrea"
        };

        Game myGame;
        int numberPlayers = 2;

        for(int i = 0; i < numberPlayers; ++i)
        {
            myGame.addPlayerByName(names[i]);
        }

        myGame.startGame();
        myGame.showPlayerCards();
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
