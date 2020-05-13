//
// Created by loic on 5/13/20.
//

#include "Vampire.hpp"

Vampire::Vampire(int posX, int posY) : Humanoid(posX, posY) {}

char Vampire::getSymbol() const {
    return 'v';
}
