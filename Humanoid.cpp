/**
 * File: Humanoid.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include <iostream>
#include "Humanoid.hpp"
#include "Action.hpp"

Humanoid::Humanoid(size_t posX, size_t posY, Action* action) : _posX(posX), _posY(posY), _isAlive(true), _action(action) {
    _action->setHumanoid(this);
}

Humanoid::~Humanoid() {
    // Todo: Remove debug
    std::cout << "Humanoid clear" << std::endl;
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

void Humanoid::setPosX(size_t posX) {
    _posX = posX;
}

void Humanoid::setPosY(size_t posY) {
    _posY = posY;
}

void Humanoid::setIsAlive(bool isAlive) {
    _isAlive = isAlive;
}