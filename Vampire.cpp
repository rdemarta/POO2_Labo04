/**
 * File: Vampire.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include <iostream>
#include "Vampire.hpp"

using namespace  std;

Vampire::Vampire(size_t posX, size_t posY, Action* action) : Humanoid(posX, posY, action) {}

char Vampire::getSymbol() const {
    return Vampire::_symbol;
}

size_t Vampire::getMoveDistance() const {
    return Vampire::_moveDistance;
}

void Vampire::setAction(Field* f) const {
    Humanoid* nearestHuman = f->findNearest(this, 'h');

    // Check if vampire can attack from where he currently is
    size_t distanceFromNearest = Field::distanceBetween(this, nearestHuman);

    if(distanceFromNearest <= 1) { // TODO move 1 to an attackDistance attribute (common with Buffy)
        // TODO attack
        return;
    }

    // TODO refactor to private method?
    // X and Y position diffence
    int deltaX = (int)nearestHuman->getPosX() - (int)getPosX();
    int deltaY = (int)nearestHuman->getPosY() - (int)getPosY();
    // Actual move distance
    int moveOffsetX = deltaX == 0 ? 0 : deltaX > 0 ? (int)getMoveDistance() : (int)-getMoveDistance();
    int moveOffsetY = deltaY == 0 ? 0 : deltaY > 0 ? (int)getMoveDistance() : (int)-getMoveDistance();

    getAction()->setNextX(getPosX() + (size_t)moveOffsetX);
    getAction()->setNextY(getPosY() + (size_t)moveOffsetY);
}

void Vampire::executeAction(Field *f) const {
    getAction()->execute(f);
}