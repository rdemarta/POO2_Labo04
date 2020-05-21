//
// Created by loic on 5/21/20.
//

#ifndef POO2_LABO04_CHASEANDKILLHUMANOIDACTION_HPP
#define POO2_LABO04_CHASEANDKILLHUMANOIDACTION_HPP


#include "Action.hpp"

class ChaseAndKillHumanoidAction : public Action {

public:
    ChaseAndKillHumanoidAction();
    void chaseHumanoid(Humanoid* nearestTarget);

private:
    /**
     * Calculates the move offset from a and a target direction/distance, capped at moveDistance
     * Examples:
     * deltaToOffset(5, -32) -> -5
     * deltaToOffset(10, 4) -> 4
     * deltaToOffset(10, 0) -> 0
     *
     * @param moveDistance max distance to return
     * @param delta target distance/direction
     * @return
     */
    int deltaToOffset(size_t moveDistance, int delta);

};


#endif //POO2_LABO04_CHASEANDKILLHUMANOIDACTION_HPP
