#include "Card.h"

Card::Card(const std::string& color) : color(color)
{

}

Card::~Card()
{

}

std::string Card::getColor() const{
    return color;
}
