/**
 * File: Vampire.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include "Vampire.hpp"
#include "ActionChaseAndKill.hpp"

using namespace  std;

Vampire::Vampire(size_t posX, size_t posY, Action* action) : Humanoid(posX, posY, action) {}

char Vampire::getSymbol() const {
    return Vampire::SYMBOL;
}

size_t Vampire::getMoveDistance() const {
    return Vampire::MOVE_DISTANCE;
}

void Vampire::setAction(Field* f) {
    // Vampire chase humans only if there is one or more, otherwise he waits
    if(f->getHumansNb() > 0){
        getAction()->set(f);
    }
}

void Vampire::executeAction(Field *f) {
    if(!getAction()->getNextAlive()){
        f->decrementVampiresNb();
    }
    getAction()->execute(f);
}