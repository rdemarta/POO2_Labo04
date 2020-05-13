//
// Created by loic on 5/13/20.
//

#ifndef POO2_LABO04_HUMAIN_HPP
#define POO2_LABO04_HUMAIN_HPP


#include "Humanoid.hpp"

class Humain : public Humanoid{

private:

public:
    Humain(int posX, int posY);

    char getSymbol() const override;

};


#endif //POO2_LABO04_HUMAIN_HPP
