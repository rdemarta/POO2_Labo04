/**
 * File: Field.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include <time.h>
#include <iostream>
#include <cmath>
#include <limits>
#include "Human.hpp"
#include "Vampire.hpp"
#include "Field.hpp"
#include "Buffy.hpp"
#include "ChaseAndKillHumanoidAction.hpp"
#include "ActionHuman.hpp"

using namespace std;

Field::Field(size_t width, size_t height, size_t humainsNb, size_t vampiresNb) :
        _width(width), _height(height), _humansNb(humainsNb), _vampiresNb(vampiresNb), _turn(0), _displayer(new Displayer(this))
{
    // Seed the random with current time to have all the time new random sequence
    srand((unsigned int)time(NULL));

    size_t randX, randY;
    // Fill all humains with random position
    for(size_t i = 0; i < _humansNb; ++i){
        randX = rand() % (_width);
        randY = rand() % (_height);
        _humanoids.push_back(new Human(randX, randY, new ActionHuman));
    }
    // Fill all vampires with random position
    for(size_t i = 0; i < vampiresNb; ++i){
        randX = rand() % (_width);
        randY = rand() % (_height);
        _humanoids.push_back(new Vampire(randX, randY, new ChaseAndKillHumanoidAction));
    }

    // Add Buffy
    randX = rand() % (_width);
    randY = rand() % (_height);
    _humanoids.push_back(new Buffy(randX, randY, new Action));
}

Field::~Field() {
    // Todo: Remove debug
    std::cout << "Field clear" << std::endl;
    delete _displayer;
}

void Field::displayGame() const {
    _displayer->displayGame();
}

Humanoid* Field::findNearest(const Humanoid* h, char targetSymbol) {
    Humanoid* nearest = nullptr;
    size_t bestDist = numeric_limits<int>::max();

    for(Humanoid* targetH : _humanoids) {
        if(targetH->getSymbol() == targetSymbol) {
            size_t cellDist = distanceBetween(h, targetH);

            if(cellDist < bestDist) {
                nearest = targetH;
                bestDist = cellDist;
            }
        }
    }

    cout << "##### Nearest: (" << nearest->getPosX() << ";" << nearest->getPosY() << ") dist=" << bestDist << " #####" << endl;

    return nearest;
}

Humanoid* Field::getHumanoidByPosition() {
    return nullptr;
}

int Field::nextTurn() {
    // Déterminer les prochaines actions
    for(list<Humanoid*>::iterator it = _humanoids.begin(); it != _humanoids.end(); it++)
        (*it)->setAction(this);
    // Executer les actions
    for(list<Humanoid*>::iterator it = _humanoids.begin(); it != _humanoids.end(); it++)
        (*it)->executeAction(this);
    // Enlever les humanoides tués
    for(list<Humanoid*>::iterator it = _humanoids.begin(); it != _humanoids.end(); )
        if (!(*it)->isAlive()) {
            Humanoid* humanoidToDelete = *it;
            it = _humanoids.erase(it); // suppression de l’élément dans la liste
            delete humanoidToDelete; // destruction de l’humanoide référencé
        }
        else
            ++it;
    return _turn++;
}


void Field::clearHumanoids() const {
    for(Humanoid* humanoid : _humanoids){
        delete humanoid;
    }
}

void Field::addHumanoid(Humanoid* h) {
    _humanoids.push_front(h);
}

size_t Field::distanceBetween(const Humanoid* h1, const Humanoid* h2) {
    // Floored hypotenuse gives the shortest path (unit = cell)
    size_t deltaX = distanceDifference(h1->getPosX(), h2->getPosX());
    size_t deltaY = distanceDifference(h1->getPosY(), h2->getPosY());
    return(size_t)(hypot(deltaX, deltaY));
}



/* GETTERS */

size_t Field::getWidth() const {
    return _width;
}

size_t Field::getHeight() const {
    return _height;
}

size_t Field::getHumansNb() const {
    return _humansNb;
}

size_t Field::getVampiresNb() const {
    return _vampiresNb;
}

const std::list<Humanoid *> &Field::getHumanoids() const {
    return _humanoids;
}

int Field::getTurn() const {
    return _turn;
}



void Field::decrementHumansNb() {
    --_humansNb;
}

void Field::incrementVampiresNb() {
    ++_vampiresNb;
}


/* PRIVATE METHODS */

size_t Field::distanceDifference(size_t dist1, size_t dist2) {
    return dist1 > dist2 ? dist1 - dist2 : dist2 - dist1;
}
