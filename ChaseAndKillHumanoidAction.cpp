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
        // X and Y position diffence
        int deltaX = (int) nearestTarget->getPosX() - (int) getHumanoid()->getPosX();
        int deltaY = (int) nearestTarget->getPosY() - (int) getHumanoid()->getPosY();
        // Actual move distance
        int moveOffsetX = deltaToOffset(getHumanoid()->getMoveDistance(), deltaX);
        int moveOffsetY = deltaToOffset(getHumanoid()->getMoveDistance(), deltaY);
        // Set the future coordinates
        setNextX(getHumanoid()->getPosX() + (size_t) moveOffsetX);
        setNextY(getHumanoid()->getPosY() + (size_t) moveOffsetY);
    }
}

int ChaseAndKillHumanoidAction::deltaToOffset(size_t moveDistance, int delta) {
    if(delta == 0) return 0;

    int direction = delta > 0 ? 1 : -1;
    return direction * std::min((int)moveDistance, delta * direction);
}
