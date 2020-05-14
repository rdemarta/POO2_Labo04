//
// Created by loic on 5/14/20.
//

#ifndef POO2_LABO04_BUFFY_HPP
#define POO2_LABO04_BUFFY_HPP


#include "Humanoid.hpp"

class Buffy : public Humanoid{
private:
    static const char _symbol = 'B';

public:
    Buffy(size_t posX, size_t posY);

    char getSymbol() const override;
};


#endif //POO2_LABO04_BUFFY_HPP
