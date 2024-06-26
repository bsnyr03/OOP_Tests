#ifndef NUMBERCARD_H
#define NUMBERCARD_H

#include "Card.h"

class NumberCard : public Card
{
    public:
        NumberCard(const std::string &color, int number);

        void printCard() const override;

        int getNumber() const;


    private:
        int number;
};

#endif // NUMBERCARD_H
