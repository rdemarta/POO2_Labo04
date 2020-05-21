/**
 * File: ActionWander.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include <iostream>
#include <ctime>
#include "ActionWander.hpp"

void ActionWander::set(Field* field) {
    srand((unsigned int)time(NULL));
    size_t randomX = rand() % field->getWidth() - 1;
    size_t randomY = rand() % field->getHeight() - 1;

    std::cout << "Going to (" << randomX << ";" << randomY << ")";

    Action::headTowardsPoint(randomX, randomY);
}

void ActionWander::execute(Field* field) const {
    Action::execute(field);
}
