//
// Created by loic on 5/14/20.
//

#include "Buffy.hpp"

Buffy::Buffy(size_t posX, size_t posY) : Humanoid(posX, posY) {}

char Buffy::getSymbol() const {
    return Buffy::_symbol;
}
