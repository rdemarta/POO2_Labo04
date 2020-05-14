//
// Created by loic on 5/13/20.
//

#ifndef POO2_LABO04_FIELD_HPP
#define POO2_LABO04_FIELD_HPP


#include <list>
#include "Humanoid.hpp"
#include "Displayer.hpp"

class Displayer;

class Field {

private:
    size_t _width;
    size_t _height;
    size_t _humainsNb;
    size_t _vampiresNb;
    std::list<Humanoid*> _humanoids;
    Displayer _displayer;
    int _turn;
public:
    Field(size_t width, size_t height, size_t humainsNb, size_t vampiresNb);
    Humanoid* findNearest(Humanoid* h);
    Humanoid* getHumanoidByPosition();
    int nextTurn();

    size_t getWidth() const;

    size_t getHeight() const;

    size_t getHumainsNb() const;

    size_t getVampiresNb() const;

    const std::list<Humanoid *> &getHumanoids() const;

};


#endif //POO2_LABO04_FIELD_HPP
