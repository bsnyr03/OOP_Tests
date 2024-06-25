//
// Created by Ruslan Kotliarenko on 16.06.24.
//

#include <random>

#include "helpers.h"
// Function to generate a random number within a specified range [min, max]
int generateRandomNumber(int min, int max) {
    // Seed the random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);

    // Generate a random number within the specified range
    return dis(gen);
}
