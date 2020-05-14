//
// Created by loic on 5/13/20.
//

#include "Vampire.hpp"

Vampire::Vampire(size_t posX, size_t posY) : Humanoid(posX, posY) {}

char Vampire::getSymbol() const {
    return Vampire::_symbol;
}

size_t Vampire::getMoveDistance() const {
    return Vampire::_moveDistance;
}
