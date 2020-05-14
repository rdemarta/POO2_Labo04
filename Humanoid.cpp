//
// Created by loic on 5/13/20.
//

#include "Humanoid.hpp"

Humanoid::Humanoid(size_t posX, size_t posY) : _posX(posX), _posY(posY) {}

size_t Humanoid::getPosX() const {
    return _posX;
}

size_t Humanoid::getPosY() const {
    return _posY;
}
