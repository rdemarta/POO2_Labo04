/**
 * File: ActionChaseAndKill.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include "ActionChaseAndKill.hpp"

ActionChaseAndKill::ActionChaseAndKill(char targetSymbol, size_t attackDistance)
: _targetSymbol(targetSymbol), _attackDistance(attackDistance) {}

void ActionChaseAndKill::set(Field* field) {
    Humanoid* nearestTarget = field->findNearest(getHumanoid(), _targetSymbol);

    // Check if vampire can attack from where he currently is
    size_t distanceFromNearest = Field::distanceBetween(getHumanoid(), nearestTarget);

    // Attack the target if he's at the right distance from us
    if(distanceFromNearest <= _attackDistance) {
        // Attack and kill it
        nearestTarget->getAction()->setNextAlive(false);
    }
    // No attack possible, chase our target
    else {
        Action::headTowardsPoint(nearestTarget->getPosX(), nearestTarget->getPosY());
    }
}
