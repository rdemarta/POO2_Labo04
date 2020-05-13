//
// Created by loic on 5/13/20.
//

#include "Humain.hpp"

Humain::Humain(int posX, int posY) : Humanoid(posX, posY) {}

char Humain::getSymbol() const {
    return 'h';
}
