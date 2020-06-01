/**
 * File: Humanoid.hpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#ifndef POO2_LABO04_HUMANOID_HPP
#define POO2_LABO04_HUMANOID_HPP


#include <cstdlib>
#include "Field.hpp"
#include "Action.hpp"

class Field;
class Action;

class Humanoid {

private:
    size_t _posX;
    size_t _posY;
    bool _isAlive;
    Action* _action;

public:
    /**
     * Constructor
     * @param posX The X position
     * @param posY The Y position
     * @param action the associate Action
     */
    Humanoid(size_t posX, size_t posY, Action* action);

    /**
     * Destructor
     */
    virtual ~Humanoid();

    virtual void setAction(Field* f) const = 0;
    virtual void executeAction(Field* f) const = 0;
    virtual char getSymbol() const = 0;
    virtual size_t getMoveDistance() const = 0;

    // Getters
    size_t getPosX() const;
    size_t getPosY() const;
    bool isAlive() const;
    Action *getAction() const;
    // Setters
    void setPosX(size_t posX);
    void setPosY(size_t posY);
    void setIsAlive(bool isAlive);

};


#endif //POO2_LABO04_HUMANOID_HPP
