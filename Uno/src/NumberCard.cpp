#include "NumberCard.h"

NumberCard::NumberCard(const std::string &color, int number) : Card(color), number(number)
{

}

void NumberCard::printCard() const {
    std::cout << "Karte: " << color << " " << number << std::endl;
}

int NumberCard::getNumber() const {
    return number;
}
