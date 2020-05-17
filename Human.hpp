/**
 * File: Human.hpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#ifndef POO2_LABO04_HUMAN_HPP
#define POO2_LABO04_HUMAN_HPP


#include "Humanoid.hpp"

class Human : public Humanoid{

private:
    static const char _symbol = 'h';
    static const size_t _moveDistance = 1;

public:
    Human(size_t posX, size_t posY, Action* action);

    char getSymbol() const override;
    size_t getMoveDistance() const override;
    void setAction(Field *f) const override;
    void executeAction(Field *f) const override;

};


#endif //POO2_LABO04_HUMAN_HPP
