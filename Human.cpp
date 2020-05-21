/**
 * File: Human.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include "Human.hpp"

Human::Human(size_t posX, size_t posY, Action* action) : Humanoid(posX, posY, action) {}

char Human::getSymbol() const {
    return Human::_symbol;
}

size_t Human::getMoveDistance() const {
    return Human::_moveDistance;
}

void Human::setAction(Field* f) const {
    getAction()->set(f);
}

void Human::executeAction(Field *f) const {
    getAction()->execute(f);
}
