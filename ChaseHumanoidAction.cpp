//
// Created by loic on 5/21/20.
//

#include "ChaseHumanoidAction.hpp"

ChaseHumanoidAction::ChaseHumanoidAction() {}

void ChaseHumanoidAction::chaseHumanoid(Humanoid* nearestTarget) {
    // Check if vampire can attack from where he currently is
    size_t distanceFromNearest = Field::distanceBetween(getHumanoid(), nearestTarget);

    // Attack the target if he's at the right distance from us
    if(distanceFromNearest <= 1) { // TODO move 1 to an attackDistance attribute (common with Buffy)
        // TODO attack
        nearestTarget->getAction()->setNextAlive(false);
    }
    // No attack possible, chase our target
    else {
        // TODO refactor to private method?
        // X and Y position diffence
        int deltaX = (int) nearestTarget->getPosX() - (int) getHumanoid()->getPosX();
        int deltaY = (int) nearestTarget->getPosY() - (int) getHumanoid()->getPosY();
        // Actual move distance
        int moveOffsetX = deltaX == 0 ? 0 : deltaX > 0 ? (int) getHumanoid()->getMoveDistance()
                                                       : (int) -getHumanoid()->getMoveDistance();
        int moveOffsetY = deltaY == 0 ? 0 : deltaY > 0 ? (int) getHumanoid()->getMoveDistance()
                                                       : (int) -getHumanoid()->getMoveDistance();
        // Set the future coordinates
        setNextX(getHumanoid()->getPosX() + (size_t) moveOffsetX);
        setNextY(getHumanoid()->getPosY() + (size_t) moveOffsetY);
    }
}
