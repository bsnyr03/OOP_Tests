//
// Created by Ruslan Kotliarenko on 20.06.24.
//

#include "world.h"
#include "PlainField.h"
#include "RecurringField.h"
#include "helpers.h"

world::world(int _size) : size(_size) {
    std::cout << "Initializing the world." << std::endl;
    initialize();
}

void world::initialize() {
    array.resize(size);
    for (int i = 0; i < size; ++i) {
        array[i].resize(size);
        for (int j = 0; j < size; ++j) {
            if (genRandomNum(0, 100) > 50) {
                array[i][j] = std::make_unique<RecurringField>();
            } else {
                array[i][j] = std::make_unique<PlainField>();
            }
        }
    }
}

void world::start() {
    while (!isEmpty()) {
        printWorld();

        executeField(
        genRandomNum(0, size),
        genRandomNum(0, size)
        );
    }
}

void world::executeField(int x, int y) {
    if (
        (x < 0 || x >= size) ||
        (y < 0 || y >= size)
    ) { throw std::invalid_argument("Invalid arguments"); }

    bool isRecurring = array[x][y]->execute();
    int currentPoints = array[x][y]->getPoints();

    if (isRecurring && currentPoints > 0) {
        findAndReplaceField(currentPoints);
    }
}

void world::findAndReplaceField(int points) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (array[i][j]->getDisplay() == 'P') {
                array[i][j] = std::make_unique<RecurringField>();
                array[i][j]->setPoints(points);
            }
        }
    }
}

bool world::isEmpty() {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (array[i][j]->getPoints() > 0) return false;
        }
    }

    return true;
};

void world::printWorld() const {
    std::cout << "------- Printing the whole world -------" << std::endl;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            array[i][j]->displayField();
            std::cout << "\t"; // Print each element separated by tabs
        }
        std::cout << std::endl; // Move to the next line after printing each row
    }
}
