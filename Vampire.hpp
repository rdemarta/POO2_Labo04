//
// Created by loic on 5/13/20.
//

#ifndef POO2_LABO04_VAMPIRE_HPP
#define POO2_LABO04_VAMPIRE_HPP


#include "Humanoid.hpp"

class Vampire : public Humanoid{

private:

public:
    Vampire(int posX, int posY);

    char getSymbol() const override;

};


#endif //POO2_LABO04_VAMPIRE_HPP
