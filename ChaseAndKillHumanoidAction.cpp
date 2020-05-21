//
// Created by loic on 5/21/20.
//

#include "ChaseAndKillHumanoidAction.hpp"

ChaseAndKillHumanoidAction::ChaseAndKillHumanoidAction() {}

void ChaseAndKillHumanoidAction::chaseHumanoid(Humanoid* nearestTarget) {
    // Check if vampire can attack from where he currently is
    size_t distanceFromNearest = Field::distanceBetween(getHumanoid(), nearestTarget);

    // Attack the target if he's at the right distance from us
    if(distanceFromNearest <= 1) { // TODO move 1 to an attackDistance attribute (common with Buffy)
        // Attack and kill it
        nearestTarget->getAction()->setNextAlive(false);
    }
    // No attack possible, chase our target
    else {
        Action::headTowardsPoint(nearestTarget->getPosX(), nearestTarget->getPosY());
    }
}
