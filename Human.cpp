//
// Created by loic on 5/13/20.
//

#include "Human.hpp"

Human::Human(size_t posX, size_t posY, Action* action) : Humanoid(posX, posY, action) {}

char Human::getSymbol() const {
    return Human::_symbol;
}

size_t Human::getMoveDistance() const {
    return Human::_moveDistance;
}

void Human::setAction(Field *f) const {

}

void Human::executeAction(Field *f) const {

}
