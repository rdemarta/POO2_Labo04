//
// Created by loic on 5/13/20.
//

#ifndef POO2_LABO04_HUMANOID_HPP
#define POO2_LABO04_HUMANOID_HPP


class Humanoid {

private:
    int _posX;
    int _posY;

public:
    Humanoid(int posX, int posY);

    virtual char getSymbol() const = 0;

    int getPosX() const;
    int getPosY() const;

};


#endif //POO2_LABO04_HUMANOID_HPP
