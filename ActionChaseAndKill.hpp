/**
 * File: ActionChaseAndKill.hpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#ifndef POO2_LABO04_ACTIONCHASEANDKILL_HPP
#define POO2_LABO04_ACTIONCHASEANDKILL_HPP


#include "Action.hpp"

class ActionChaseAndKill : public Action {

public:
    ActionChaseAndKill();
    void chaseHumanoid(Humanoid* nearestTarget);
};


#endif //POO2_LABO04_ACTIONCHASEANDKILL_HPP