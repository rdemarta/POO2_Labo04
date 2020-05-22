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

void Action::moveRandomly(Field* field) {
    srand((unsigned int)time(NULL));
    size_t randomX = rand() % field->getWidth();
    size_t randomY = rand() % field->getHeight();

    Action::headTowardsPoint(randomX, randomY);
}

void Action::headTowardsPoint(size_t x, size_t y) {
    int deltaX = (int) x - (int) getHumanoid()->getPosX();
    int deltaY = (int) y - (int) getHumanoid()->getPosY();
    // Actual move distance
    int moveOffsetX = deltaToOffset(getHumanoid()->getMoveDistance(), deltaX);
    int moveOffsetY = deltaToOffset(getHumanoid()->getMoveDistance(), deltaY);
    // Set the future coordinates
    setNextX(getHumanoid()->getPosX() + (size_t) moveOffsetX);
    setNextY(getHumanoid()->getPosY() + (size_t) moveOffsetY);

}

int Action::deltaToOffset(size_t moveDistance, int delta) {
    if(delta == 0) return 0;

    int direction = delta > 0 ? 1 : -1;
    return direction * std::min((int)moveDistance, delta * direction);
}
