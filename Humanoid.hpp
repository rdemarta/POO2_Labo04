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

    /**
     * Set the action routine, it will set all futures positions etc. This way we can pre-calculate the future
     * and after that, we'll execute them. This way all actions will be independents and executed at the same time
     * @param f The Field
     */
    virtual void setAction(Field* f) const = 0;

    /**
     * Execute the action previously set
     * @param f The Field
     */
    virtual void executeAction(Field* f) const = 0;

    /**
     * Get the symbol associate to the Class
     * @return The symbol associate to the Class
     */
    virtual char getSymbol() const = 0;

    /**
     * Get the move distance associate to the Class
     * @return The move distance associate to the Class
     */
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
