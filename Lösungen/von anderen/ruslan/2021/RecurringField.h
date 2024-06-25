//
// Created by Ruslan Kotliarenko on 20.06.24.
//

#ifndef INC_2021_RECURRINGFIELD_H
#define INC_2021_RECURRINGFIELD_H


#include "field.h"
class RecurringField : public field {
public:
    bool execute() override;
    RecurringField();
};


#endif//INC_2021_RECURRINGFIELD_H
