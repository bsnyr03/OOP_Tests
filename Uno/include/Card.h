#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>

class Card
{
    public:
        Card(const std::string& color);

        virtual ~Card();

        std::string getColor() const;

        virtual void printCard() const = 0; // rein virtuelle Funktion, um die Klasse als Abstrakt zu definieren

    protected:
        std::string color; //steht für color

};

#endif // CARD_H
