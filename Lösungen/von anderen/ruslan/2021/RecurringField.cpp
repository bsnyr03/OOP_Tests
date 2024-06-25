//
// Created by Ruslan Kotliarenko on 20.06.24.
//

#include "RecurringField.h"
#include "helpers.h"

RecurringField::RecurringField() : field(genRandomNum(1, 4), 'R') {}

bool RecurringField::execute() {
    setPoints(getPoints() - 1);
    return true;
}