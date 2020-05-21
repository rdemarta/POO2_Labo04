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

};


#endif //POO2_LABO04_CHASEANDKILLHUMANOIDACTION_HPP
