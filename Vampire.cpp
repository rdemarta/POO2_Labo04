//
// Created by loic on 5/13/20.
//

#include "Vampire.hpp"

Vampire::Vampire(size_t posX, size_t posY, Action* action) : Humanoid(posX, posY, action) {}

char Vampire::getSymbol() const {
    return Vampire::_symbol;
}

size_t Vampire::getMoveDistance() const {
    return Vampire::_moveDistance;
}

void Vampire::setAction(Field *f) const {

}

void Vampire::executeAction(Field *f) const {

}