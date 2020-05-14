//
// Created by loic on 5/13/20.
//

#include "Humanoid.hpp"
#include "Action.hpp"

Humanoid::Humanoid(size_t posX, size_t posY, Action* action) : _posX(posX), _posY(posY), _isAlive(true), _action(action) {}

Humanoid::~Humanoid() {
    delete _action;
}

size_t Humanoid::getPosX() const {
    return _posX;
}

size_t Humanoid::getPosY() const {
    return _posY;
}

bool Humanoid::isAlive() const {
    return _isAlive;
}

Action *Humanoid::getAction() const {
    return _action;
}
