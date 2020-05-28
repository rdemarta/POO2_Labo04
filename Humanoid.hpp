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
    size_t _id;
    static size_t _count;

public:
    Humanoid(size_t posX, size_t posY, Action* action);
    ~Humanoid();

    bool isAlive() const;
    virtual void setAction(Field* f) const = 0;
    virtual void executeAction(Field* f) const = 0;
    virtual char getSymbol() const = 0;
    virtual size_t getMoveDistance() const = 0;

    size_t getPosX() const;
    size_t getPosY() const;
    Action *getAction() const;
    void setPosX(size_t posX);
    void setPosY(size_t posY);
    void setIsAlive(bool isAlive);

    const size_t getId() const;

    void setId(size_t id);

};


#endif //POO2_LABO04_HUMANOID_HPP
