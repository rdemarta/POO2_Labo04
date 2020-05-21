//
// Created by loic on 5/21/20.
//

#ifndef POO2_LABO04_CHASEHUMANOIDACTION_HPP
#define POO2_LABO04_CHASEHUMANOIDACTION_HPP


#include "Action.hpp"

class ChaseHumanoidAction : public Action {

public:
    ChaseHumanoidAction();
    void chaseHumanoid(Humanoid* nearestTarget);

private:

};


#endif //POO2_LABO04_CHASEHUMANOIDACTION_HPP
