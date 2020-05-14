//
// Created by loic on 5/14/20.
//

#include "Buffy.hpp"

Buffy::Buffy(size_t posX, size_t posY, Action* action) : Humanoid(posX, posY, action) {}

char Buffy::getSymbol() const {
    return Buffy::_symbol;
}

size_t Buffy::getMoveDistance() const {
    return Buffy::_moveDistance;
}

void Buffy::setAction(Field *f) const {
    getAction()->setNextX(getPosX() + 1);
    getAction()->setNextY(getPosY() + 1);
}

void Buffy::executeAction(Field *f) const {
    getAction()->execute(f);
}
