/**
 * File: Action.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include <iostream>
#include "Action.hpp"

Action::Action() : _nextAlive(true) {}

Action::~Action() {
    // Todo: Remove debug
    std::cout << "Action clear" << std::endl;
}


void Action::execute(Field *field) const {
    _humanoid->setPosX(_nextX);
    _humanoid->setPosY(_nextY);
    _humanoid->setIsAlive(_nextAlive);

}

size_t Action::getNextX() const {
    return _nextX;
}

void Action::setNextX(size_t nextX) {
    _nextX = nextX;
}

size_t Action::getNextY() const {
    return _nextY;
}

void Action::setNextY(size_t nextY) {
    _nextY = nextY;
}

bool Action::getNextAlive() const {
    return _nextAlive;
}

void Action::setNextAlive(bool nextAlive) {
    _nextAlive = nextAlive;
}

Humanoid *Action::getHumanoid() const {
    return _humanoid;
}

void Action::setHumanoid(Humanoid *humanoid) {
    _humanoid = humanoid;
    // Right after the humanoid set, set the nextX,Y
    // otherwise the Humanoid will be teleport at 0,0
    _nextX = _humanoid->getPosX();
    _nextY = _humanoid->getPosY();
}