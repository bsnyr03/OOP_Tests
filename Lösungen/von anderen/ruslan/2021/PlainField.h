//
// Created by Ruslan Kotliarenko on 20.06.24.
//

#ifndef INC_2021_PLAINFIELD_H
#define INC_2021_PLAINFIELD_H


#include "field.h"

class PlainField : public field {
    public:
        PlainField();
        bool execute() override;
};


#endif//INC_2021_PLAINFIELD_H
