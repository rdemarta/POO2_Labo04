//
// Created by loic on 5/13/20.
//

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

};


#endif //POO2_LABO04_HUMANOID_HPP
