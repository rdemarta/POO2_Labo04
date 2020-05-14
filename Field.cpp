//
// Created by loic on 5/13/20.
//

#include <list>

#include "Field.hpp"

using namespace std;

Humanoid* Field::findNearest(Humanoid *h) {
    return nullptr;
}

Humanoid* Field::getHumanoidByPosition() {
    return nullptr;
}

int Field::nextTurn() {
    // Déterminer les prochaines actions
    for (list<Humanoid*>::iterator it = humanoids.begin(); it != humanoids.end(); it++)
        (*it)->setAction(*this);
    // Executer les actions
    for (list<Humanoid*>::iterator it = humanoids.begin(); it != humanoids.end(); it++)
        (*it)->executeAction(*this);
    // Enlever les humanoides tués
    for (list<Humanoid*>::iterator it = humanoids.begin(); it != humanoids.end(); )
        if (!(*it)->isAlive()) {
            it = humanoids.erase(it); // suppression de l’élément dans la liste
            delete *it; // destruction de l’humanoide référencé
        }
        else
            ++it;
    return _turn++;
}
