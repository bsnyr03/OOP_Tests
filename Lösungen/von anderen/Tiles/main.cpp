#include <iostream>
#include "Floor.h"
#include <stdexcept>
#include <time.h>

int main()
{
    srand(time(0));
    try
    {
        Floor floor;
        floor.print();
        floor.replace(0, 1); //check if replace works
        std::cout << std::endl;
        floor.print();
        floor.replace(4, 4); //check if exceptions work
        return 0;
    }
    catch(const std::invalid_argument& except)
    {
        std::cout << except.what();
    }
    catch(...)
    {
        std::cout << "Unknown error";
    }
}
