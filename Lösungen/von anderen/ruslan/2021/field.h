//
// Created by Ruslan Kotliarenko on 20.06.24.
//

#ifndef INC_2021_FIELD_H
#define INC_2021_FIELD_H

#include <string>
#include <iostream>

class field {
    private:
        int points;
        char display;

    public:
        // Constructor
        field(int _points, char _display);

        // Destructor
        ~field();

        // Methods
        virtual bool execute();
        void displayField() const;
        int getPoints() const;
        void setPoints(int _points);

        char getDisplay() const;
};


#endif//INC_2021_FIELD_H
