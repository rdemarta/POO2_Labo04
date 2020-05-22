/**
 * File: Buffy.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include "Buffy.hpp"
#include "ChaseAndKillHumanoidAction.hpp"

Buffy::Buffy(size_t posX, size_t posY, Action* action) : Humanoid(posX, posY, action) {}

char Buffy::getSymbol() const {
    return Buffy::_symbol;
}

size_t Buffy::getMoveDistance() const {
    return Buffy::_moveDistance;
}

void Buffy::setAction(Field *f) const {
    if(f->getVampiresNb() > 0){
        Humanoid *nearestVampire = f->findNearest(this, 'v');
        ((ChaseAndKillHumanoidAction *) getAction())->chaseHumanoid(nearestVampire);
    }else{
        getAction()->moveRandomly(f);
    }
}

void Buffy::executeAction(Field *f) const {
    getAction()->execute(f);
}
