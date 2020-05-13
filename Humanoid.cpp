//
// Created by loic on 5/13/20.
//

#include "Humanoid.hpp"

Humanoid::Humanoid(int posX, int posY) : _posX(posX), _posY(posY) {}

int Humanoid::getPosX() const {
    return _posX;
}

int Humanoid::getPosY() const {
    return _posY;
}
