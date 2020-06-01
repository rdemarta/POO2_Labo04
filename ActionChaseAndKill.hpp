/**
 * File: ActionChaseAndKill.hpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#ifndef POO2_LABO04_ACTIONCHASEANDKILL_HPP
#define POO2_LABO04_ACTIONCHASEANDKILL_HPP


#include "Action.hpp"

class ActionChaseAndKill : public Action {

    char _targetSymbol;
    size_t _attackDistance;
public:
    /**
     * Constructor
     * @param targetSymbol The symbol of the target we'll chase
     * @param attackDistance The attack distance (range)
     */
    ActionChaseAndKill(char targetSymbol, size_t attackDistance);

    /**
     * Sets nextPos attributes to follow the given target
     * @param nearestTarget as a Humanoid
     */
    void set(Field* field) override;
};


#endif //POO2_LABO04_ACTIONCHASEANDKILL_HPP
