#include <iostream>
#include "Mensch.h"

using namespace std;

int main()
{
    Mensch human(50, 30);
    human.train();
    human.chooseExercise();
    while(human.train())
        human.chooseExercise();
    return 0;
}
