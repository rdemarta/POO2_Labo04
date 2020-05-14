//
// Created by loic on 5/14/20.
//

#include <iostream>
#include "Action.hpp"

Action::Action() {}

Action::~Action() {
    // Todo: Remove debug
    std::cout << "Action clear" << std::endl;
}


void Action::execute(Field *field) const {
    _humanoid->setPosX(_nextX);
    _humanoid->setPosY(_nextY);
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

void Action::setHumanoid(Humanoid *humanoid) {
    _humanoid = humanoid;
}