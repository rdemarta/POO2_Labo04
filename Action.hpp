/**
 * File: Action.hpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#ifndef POO2_LABO04_ACTION_HPP
#define POO2_LABO04_ACTION_HPP


#include <glob.h>
#include "Field.hpp"

class Field;
class Humanoid;

class Action {

private:
    size_t _nextX;
    size_t _nextY;
    bool _nextAlive;
    Humanoid* _humanoid;

public:
    Action();
    ~Action();

    void execute(Field* field) const;


    size_t getNextX() const;

    void setNextX(size_t nextX);

    size_t getNextY() const;

    void setNextY(size_t nextY);

    bool getNextAlive() const;

    void setNextAlive(bool nextAlive);

    void setHumanoid(Humanoid* humanoid);

public:

};


#endif //POO2_LABO04_ACTION_HPP
