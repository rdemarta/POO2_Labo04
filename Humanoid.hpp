//
// Created by loic on 5/13/20.
//

#ifndef POO2_LABO04_HUMANOID_HPP
#define POO2_LABO04_HUMANOID_HPP


#include <cstdlib>
#include "Field.hpp"

class Humanoid {

private:
    size_t _posX;
    size_t _posY;

public:
    Humanoid(size_t posX, size_t posY);

    bool isAlive();
    void setAction(Field* f);
    void executeAction(Field* f);
    virtual char getSymbol() const = 0;

    size_t getPosX() const;
    size_t getPosY() const;

};


#endif //POO2_LABO04_HUMANOID_HPP
