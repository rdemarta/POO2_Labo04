/**
 * File: ChaseAndKillHumanoidAction.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include "ChaseAndKillHumanoidAction.hpp"

ChaseAndKillHumanoidAction::ChaseAndKillHumanoidAction(char targetSymbol) : _targetSymbol(targetSymbol) {}

void ChaseAndKillHumanoidAction::set(Field* f) {
    Humanoid* nearestHuman = f->findNearest(getHumanoid(), _targetSymbol);

    // Check if vampire can attack from where he currently is
    size_t distanceFromNearest = Field::distanceBetween(getHumanoid(), nearestHuman);

    // Attack the target if he's at the right distance from us
    if(distanceFromNearest <= 1) { // TODO move 1 to an attackDistance attribute (common with Buffy)
        // Attack and kill it
        // TODO can it attack if it is dead?
        nearestHuman->getAction()->setNextAlive(false);
    }
    // No attack possible, chase our target
    else {
        Action::headTowardsPoint(nearestHuman->getPosX(), nearestHuman->getPosY());
    }
}

void ChaseAndKillHumanoidAction::execute(Field* field) const {
    Action::execute(field);
}
