//
// Created by Ruslan Kotliarenko on 20.06.24.
//

#ifndef INC_2021_WORLD_H
#define INC_2021_WORLD_H


#include <vector>
#include "field.h"

class world {
    public:
        world(int size);

        void start();

        void printWorld() const;

    private:
        int size;
        std::vector<std::vector<std::unique_ptr<field>>> array;

        void initialize();
        void executeField(int x, int y);
        bool isEmpty();

        void findAndReplaceField(int points);
};


#endif//INC_2021_WORLD_H
