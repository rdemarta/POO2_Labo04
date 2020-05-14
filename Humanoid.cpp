//
// Created by loic on 5/13/20.
//

#include "Humanoid.hpp"

Humanoid::Humanoid(size_t posX, size_t posY) : _posX(posX), _posY(posY), _isAlive(true) {}

size_t Humanoid::getPosX() const {
    return _posX;
}

size_t Humanoid::getPosY() const {
    return _posY;
}

bool Humanoid::isAlive() {
    return _isAlive;
}

/*
void Humanoid::setAction(Field* f) {

}

void Humanoid::executeAction(Field* f) {

}
*/