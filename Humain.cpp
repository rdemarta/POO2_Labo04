//
// Created by loic on 5/13/20.
//

#include "Humain.hpp"

Humain::Humain(size_t posX, size_t posY) : Humanoid(posX, posY) {}

char Humain::getSymbol() const {
    return Humain::_symbol;
}

size_t Humain::getMoveDistance() const {
    return Humain::_moveDistance;
}
