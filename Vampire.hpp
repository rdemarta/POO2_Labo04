//
// Created by loic on 5/13/20.
//

#ifndef POO2_LABO04_VAMPIRE_HPP
#define POO2_LABO04_VAMPIRE_HPP


#include "Humanoid.hpp"

class Vampire : public Humanoid{

private:
    static const char _symbol = 'v';
    static const size_t _moveDistance = 1;

public:
    Vampire(size_t posX, size_t posY);

    char getSymbol() const override;
    size_t getMoveDistance() const override;

};


#endif //POO2_LABO04_VAMPIRE_HPP
