//
// Created by loic on 5/13/20.
//

#ifndef POO2_LABO04_VAMPIRE_HPP
#define POO2_LABO04_VAMPIRE_HPP


#include "Humanoid.hpp"

class Vampire : public Humanoid{

private:
    static const char _symbol = 'v';

public:
    Vampire(size_t posX, size_t posY);

    char getSymbol() const override;

};


#endif //POO2_LABO04_VAMPIRE_HPP
