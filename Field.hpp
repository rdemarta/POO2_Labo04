//
// Created by loic on 5/13/20.
//

#ifndef POO2_LABO04_FIELD_HPP
#define POO2_LABO04_FIELD_HPP


#include <list>
#include "Humanoid.hpp"

class Field {

private:
    std::list<Humanoid*> humanoids;
    int _turn;
    size_t width;
    size_t height;
public:
    Humanoid* findNearest(Humanoid* h);
    Humanoid* getHumanoidByPosition();
    int nextTurn();

};


#endif //POO2_LABO04_FIELD_HPP
