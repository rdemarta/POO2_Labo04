/**
 * File: Buffy.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include <iostream>
#include "Buffy.hpp"

Buffy::Buffy(size_t posX, size_t posY, Action* action, Action* idleAction)
: Humanoid(posX, posY, action), _idleAction(idleAction) {
    _idleAction->setHumanoid(this);
}

char Buffy::getSymbol() const {
    return Buffy::_symbol;
}

size_t Buffy::getMoveDistance() const {
    return Buffy::_moveDistance;
}

void Buffy::setAction(Field* f) const {
    if(f->getVampiresNb() > 0) {
        getAction()->set(f);
    } else {
        _idleAction->set(f);
    }
}

void Buffy::executeAction(Field *f) const {
    if(f->getVampiresNb() > 0) {
        getAction()->execute(f);
    } else {
        _idleAction->execute(f);
    }
}

Buffy::~Buffy() {
    delete _idleAction;
}
