//
// Created by robin on 21.05.20.
//

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
