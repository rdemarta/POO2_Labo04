//
// Created by loic on 5/13/20.
//

#ifndef POO2_LABO04_DISPLAYER_HPP
#define POO2_LABO04_DISPLAYER_HPP


#include "Field.hpp"

class Field;

class Displayer {

private:
    Field* _field;

    const char _cornerBorderChar = '+';
    const char _upDownBorderChar = '-';
    const char _leftRightBorderChar = '|';

public:
    Displayer(Field* field);

    void displayGame() const;
};


#endif //POO2_LABO04_DISPLAYER_HPP
