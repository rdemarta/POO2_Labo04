//
// Created by robin on 21.05.20.
//

#ifndef POO2_LABO04_ACTIONHUMAN_HPP
#define POO2_LABO04_ACTIONHUMAN_HPP


#include "Action.hpp"

class ActionHuman : public Action {

public:
    void execute(Field* field) const override;
};


#endif //POO2_LABO04_ACTIONHUMAN_HPP
