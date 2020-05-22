/**
 * File: Vampire.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include "Vampire.hpp"
#include "ChaseAndKillHumanoidAction.hpp"

using namespace  std;

Vampire::Vampire(size_t posX, size_t posY, Action* action) : Humanoid(posX, posY, action) {}

char Vampire::getSymbol() const {
    return Vampire::_symbol;
}

size_t Vampire::getMoveDistance() const {
    return Vampire::_moveDistance;
}

void Vampire::setAction(Field* f) const {
    // Vampire chase humans only if there is one or more, otherwise he waits
    if(f->getHumansNb() > 0){
        Humanoid *nearestHuman = f->findNearest(this, 'h');
        ((ChaseAndKillHumanoidAction *) getAction())->chaseHumanoid(nearestHuman);
    }
}

void Vampire::executeAction(Field *f) const {
    if(!getAction()->getNextAlive()){
        f->decrementVampiresNb();
    }
    getAction()->execute(f);
}