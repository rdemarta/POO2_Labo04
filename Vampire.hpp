/**
 * File: Vampire.hpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#ifndef POO2_LABO04_VAMPIRE_HPP
#define POO2_LABO04_VAMPIRE_HPP


#include "Humanoid.hpp"

class Vampire : public Humanoid{

private:
    static const char SYMBOL = 'v';
    static const size_t MOVE_DISTANCE = 1;

public:
    Vampire(size_t posX, size_t posY, Action* action);

    char getSymbol() const override;
    size_t getMoveDistance() const override;

    void setAction(Field *f) const override;

    void executeAction(Field *f) const override;

};


#endif //POO2_LABO04_VAMPIRE_HPP
