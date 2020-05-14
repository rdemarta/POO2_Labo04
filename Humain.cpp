//
// Created by loic on 5/13/20.
//

#include "Humain.hpp"

Humain::Humain(size_t posX, size_t posY, Action* action) : Humanoid(posX, posY, action) {}

char Humain::getSymbol() const {
    return Humain::_symbol;
}

size_t Humain::getMoveDistance() const {
    return Humain::_moveDistance;
}

void Humain::setAction(Field *f) const {

}

void Humain::executeAction(Field *f) const {

}
