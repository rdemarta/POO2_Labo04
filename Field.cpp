//
// Created by loic on 5/13/20.
//

#include <time.h>
#include "Humain.hpp"
#include "Vampire.hpp"
#include "Field.hpp"

using namespace std;

Field::Field(size_t width, size_t height, size_t humainsNb, size_t vampiresNb) :
    _width(width), _height(height),_humainsNb(humainsNb),_vampiresNb(vampiresNb)
{

    // Seed the random with current time to have all the time new random sequence
    srand((unsigned int)time(NULL));

    size_t randX, randY;
    // Fill all humains with random position
    for(size_t i = 0; i < _humainsNb; ++i){
        randX = rand() % (_width);
        randY = rand() % (_height);
        _humanoids.push_back(new Humain(randX, randY));
    }
    // Fill all vampires with random position
    for(size_t i = 0; i < vampiresNb; ++i){
        randX = rand() % (_width);
        randY = rand() % (_height);
        _humanoids.push_back(new Vampire(randX, randY));
    }
}

/* GETTERS */

size_t Field::getWidth() const {
    return _width;
}

size_t Field::getHeight() const {
    return _height;
}

size_t Field::getHumainsNb() const {
    return _humainsNb;
}

size_t Field::getVampiresNb() const {
    return _vampiresNb;
}

const std::list<Humanoid *> &Field::getHumanoids() const {
    return _humanoids;
}




Humanoid* Field::findNearest(Humanoid *h) {
    return nullptr;
}

Humanoid* Field::getHumanoidByPosition() {
    return nullptr;
}

int Field::nextTurn() {
    /*
    // Déterminer les prochaines actions
    for (list<Humanoid*>::iterator it = _humanoids.begin(); it != _humanoids.end(); it++)
        (*it)->setAction(*this);
    // Executer les actions
    for (list<Humanoid*>::iterator it = _humanoids.begin(); it != _humanoids.end(); it++)
        (*it)->executeAction(*this);
    // Enlever les humanoides tués
    for (list<Humanoid*>::iterator it = _humanoids.begin(); it != _humanoids.end(); )
        if (!(*it)->isAlive()) {
            it = _humanoids.erase(it); // suppression de l’élément dans la liste
            delete *it; // destruction de l’humanoide référencé
        }
        else
            ++it;
    return _turn++;
     */
    return 0;
}
