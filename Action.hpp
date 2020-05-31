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
    virtual ~Action();

    virtual void execute(Field* field) const; // TODO virtual?


    void setNextX(size_t nextX);

    void setNextY(size_t nextY);

    bool getNextAlive() const;

    void setNextAlive(bool nextAlive);

    Humanoid *getHumanoid() const;

    void setHumanoid(Humanoid* humanoid);

    void moveRandomly(Field* field);

protected:
    /**
     * Sets next position to make humanoid head towards given coordinates
     * @param x
     * @param y
     */
    void headTowardsPoint(size_t x, size_t y);

private:
    /**
     * Calculates the move offset from a and a target direction/distance, capped at moveDistance
     * Examples:
     * deltaToOffset(5, -32) -> -5
     * deltaToOffset(10, 4) -> 4
     * deltaToOffset(10, 0) -> 0
     *
     * @param moveDistance max distance to return
     * @param delta target distance/direction
     * @return
     */
    int deltaToOffset(size_t moveDistance, int delta);
};


#endif //POO2_LABO04_ACTION_HPP
