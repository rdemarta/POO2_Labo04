/**
 * File: ActionHuman.hpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#ifndef POO2_LABO04_ACTIONHUMAN_HPP
#define POO2_LABO04_ACTIONHUMAN_HPP


#include "Action.hpp"
#include "ActionWander.hpp"

class ActionHuman : public ActionWander {

public:
    void set(Field* field) override;
    void execute(Field* field) const override;
};


#endif //POO2_LABO04_ACTIONHUMAN_HPP
