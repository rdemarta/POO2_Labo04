/**
 * File: ActionWander.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include <iostream>
#include <ctime>
#include "ActionWander.hpp"

void ActionWander::set(Field* field) {
    // TODO multiple humanoids follow the same "random" movement (moving in the same direction together)

    srand((unsigned int)time(NULL));
    size_t randomX = rand() % field->getWidth();
    size_t randomY = rand() % field->getHeight();

    Action::headTowardsPoint(randomX, randomY);
}

void ActionWander::execute(Field* field) const {
    Action::execute(field);
}
