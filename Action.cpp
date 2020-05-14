//
// Created by loic on 5/14/20.
//

#include "Action.hpp"

Action::Action() {}

void Action::execute(Field *field) const {

}

size_t Action::getNextX() const {
    return _nextX;
}

void Action::setNextX(size_t nextX) {
    _nextX = nextX;
}

size_t Action::getNextY() const {
    return _nextY;
}

void Action::setNextY(size_t nextY) {
    _nextY = nextY;
}

bool Action::getNextAlive() const {
    return _nextAlive;
}

void Action::setNextAlive(bool nextAlive) {
    _nextAlive = nextAlive;
}
