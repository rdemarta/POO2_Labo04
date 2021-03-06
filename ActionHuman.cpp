/**
 * File: ActionHuman.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include "ActionHuman.hpp"
#include "Vampire.hpp"
#include "ActionChaseAndKill.hpp"
#include "UniformRandom.hpp"

void ActionHuman::execute(Field* field) {
    // Don't forget to call the parent execute method before (because it will be set the next isAlive)
    Action::execute(field);

    // A human can only be killed by a vampire, so here we try
    if(!getNextAlive()) {
        // We die
        field->decrementHumansNb();
        // 1/2 chance to create a new vampire
        if(UniformRandom::getInstance().rand(0,1)){
            Humanoid* newVampire = new Vampire(getHumanoid()->getPosX(), getHumanoid()->getPosY(), new ActionChaseAndKill('h', 1));
            field->addHumanoid(newVampire);
            field->incrementVampiresNb();
        }
    }
}

void ActionHuman::set(Field* field) {
    moveRandomly(field);
}
