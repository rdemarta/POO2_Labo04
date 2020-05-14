//
// Created by loic on 5/13/20.
//

#ifndef POO2_LABO04_HUMAIN_HPP
#define POO2_LABO04_HUMAIN_HPP


#include "Humanoid.hpp"

class Humain : public Humanoid{

private:
    static const char _symbol = 'h';
    static const size_t _moveDistance = 1;

public:
    Humain(size_t posX, size_t posY);

    char getSymbol() const override;
    size_t getMoveDistance() const override;

};


#endif //POO2_LABO04_HUMAIN_HPP
