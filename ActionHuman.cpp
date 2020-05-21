//
// Created by robin on 21.05.20.
//

#include "ActionHuman.hpp"
#include "Vampire.hpp"
#include "ChaseHumanoidAction.hpp"

void ActionHuman::execute(Field* field) const {
    Action::execute(field);

    if(!getNextAlive()) {
        Humanoid* newVampire = new Vampire(getHumanoid()->getPosX(), getHumanoid()->getPosY(), new ChaseHumanoidAction);
        field->addHumanoid(newVampire);
    }
}
