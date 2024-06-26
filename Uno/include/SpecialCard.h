#ifndef SPECIALCARD_H
#define SPECIALCARD_H

#include "Card.h"

class SpecialCard : public Card
{
    public:
        SpecialCard(const std::string& color, const std::string& special);

        void printCard() const override;

        std::string getSpecial() const;

    private:
        std::string special;
};

#endif // SPECIALCARD_H
