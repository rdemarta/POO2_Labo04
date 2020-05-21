/**
 * File: ChaseAndKillHumanoidAction.hpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#ifndef POO2_LABO04_CHASEANDKILLHUMANOIDACTION_HPP
#define POO2_LABO04_CHASEANDKILLHUMANOIDACTION_HPP


#include "Action.hpp"

class ChaseAndKillHumanoidAction : public Action {

public:
    ChaseAndKillHumanoidAction();

    void set(Field* field) override;
    void execute(Field* field) const override;
};


#endif //POO2_LABO04_CHASEANDKILLHUMANOIDACTION_HPP
