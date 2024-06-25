#include "world.h"

int main() {
    int size;
    std::cout << "Enter the world size: ";
    std::cin >> size;

    // Allocate world object on the stack
    world myWorld(size);
    myWorld.start();

    return 0;
}
