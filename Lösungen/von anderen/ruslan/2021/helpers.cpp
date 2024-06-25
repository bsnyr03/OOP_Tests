//
// Created by Ruslan Kotliarenko on 20.06.24.
//

#include "helpers.h"

#include <random>

// Namespace for random number generation
namespace RandomGen {
    std::random_device rd;
    std::mt19937 gen(rd());
}

// Function to generate a random number in a given range
double genRandomNum(double min, double max) {
    std::uniform_real_distribution<> dis(min, max);
    return dis(RandomGen::gen);
}