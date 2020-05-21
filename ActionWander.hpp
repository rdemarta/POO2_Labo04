/**
 * File: ActionWander.hpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#ifndef POO2_LABO04_ACTIONWANDER_HPP
#define POO2_LABO04_ACTIONWANDER_HPP


#include "Action.hpp"

class ActionWander : public Action {
public:
    /**
     * Chooses a random position in field and makes the humanoid go towards this position
     * @param field
     */
    void set(Field* field) override;
    void execute(Field* field) const override;
};


#endif //POO2_LABO04_ACTIONWANDER_HPP
