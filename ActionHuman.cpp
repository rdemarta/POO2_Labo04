//
// Created by robin on 21.05.20.
//

#include <ctime>
#include "ActionHuman.hpp"
#include "Vampire.hpp"
#include "ChaseAndKillHumanoidAction.hpp"

void ActionHuman::set(Field* field) {
    ActionWander::set(field);
}

void ActionHuman::execute(Field* field) const {
    // Don't forget to call the parent execute method before (because it will be set the next isAlive)
    ActionWander::execute(field);

    // A human can only be killed by a vampire, so here we try
    if(!getNextAlive()) {
        // We die
        field->decrementHumansNb();
        // 1/2 chance to create a new vampire
        srand((unsigned int)time(NULL));
        if(rand() % 2){
            Humanoid* newVampire = new Vampire(getHumanoid()->getPosX(), getHumanoid()->getPosY(), new ChaseAndKillHumanoidAction('h'));
            field->addHumanoid(newVampire);
            field->incrementVampiresNb();
        }
    }
}
