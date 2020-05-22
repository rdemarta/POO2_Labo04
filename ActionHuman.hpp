/**
 * File: HumanAction.hpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */
#ifndef POO2_LABO04_ACTIONHUMAN_HPP
#define POO2_LABO04_ACTIONHUMAN_HPP


#include "Action.hpp"

class ActionHuman : public Action {

public:
    void execute(Field* field) const override;
};


#endif //POO2_LABO04_ACTIONHUMAN_HPP
