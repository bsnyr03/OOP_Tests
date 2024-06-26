#include "SpecialCard.h"

SpecialCard::SpecialCard(const std::string& color, const std::string& special) : Card(color), special(special)
{
}

void SpecialCard::printCard() const {
    std::cout << "Karte: " << color << " - Spezialfaehigkeit" << special << "\n" ;
}

std::string SpecialCard::getSpecial() const
{
    return special;
}
