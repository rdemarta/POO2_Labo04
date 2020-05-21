/**
 * File: Vampire.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include "Vampire.hpp"

using namespace  std;

Vampire::Vampire(size_t posX, size_t posY, Action* action) : Humanoid(posX, posY, action) {}

char Vampire::getSymbol() const {
    return Vampire::_symbol;
}

size_t Vampire::getMoveDistance() const {
    return Vampire::_moveDistance;
}

void Vampire::setAction(Field* f) const {
    if(f->getHumansNb() > 0){
        getAction()->set(f);
    }
}

void Vampire::executeAction(Field *f) const {
    getAction()->execute(f);

    if(!getAction()->getNextAlive()) {
        f->decrementVampiresNb();
    }
}