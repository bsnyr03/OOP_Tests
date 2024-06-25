//
// Created by Ruslan Kotliarenko on 20.06.24.
//

#include "field.h"

field::field(int _points, char _display) : points(_points), display(_display) {}
field::~field() {}

bool field::execute() { return false; }

void field::setPoints(int _points) {
    points = _points;
}

void field::displayField() const {
    std::cout << display << " [" << points << "]";
}

int field::getPoints() const {
    return points;
}

char field::getDisplay() const {
    return display;
}