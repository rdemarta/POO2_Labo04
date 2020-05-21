/**
 * File: Buffy.hpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#ifndef POO2_LABO04_BUFFY_HPP
#define POO2_LABO04_BUFFY_HPP


#include "Humanoid.hpp"

class Buffy : public Humanoid{
private:
    Action* _idleAction;

    static const char _symbol = 'B';
    static const size_t _moveDistance = 2;

public:
    Buffy(size_t posX, size_t posY, Action* action, Action* idleAction);

    virtual ~Buffy();

    char getSymbol() const override;
    size_t getMoveDistance() const override;

    void setAction(Field *f) const override;

    void executeAction(Field *f) const override;

};


#endif //POO2_LABO04_BUFFY_HPP
