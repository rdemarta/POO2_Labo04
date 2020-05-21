/**
 * File: Vampire.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include <iostream>
#include "Vampire.hpp"
#include "ChaseHumanoidAction.hpp"

using namespace  std;

Vampire::Vampire(size_t posX, size_t posY, Action* action) : Humanoid(posX, posY, action) {}

char Vampire::getSymbol() const {
    return Vampire::_symbol;
}

size_t Vampire::getMoveDistance() const {
    return Vampire::_moveDistance;
}

void Vampire::setAction(Field* f) const {
    Humanoid *nearestHuman = f->findNearest(this, 'h');
    ((ChaseHumanoidAction *) getAction())->chaseHumanoid(nearestHuman);
}

void Vampire::executeAction(Field *f) const {
    getAction()->execute(f);
}