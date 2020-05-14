//
// Created by loic on 5/13/20.
//

#ifndef POO2_LABO04_GAMEMANAGER_HPP
#define POO2_LABO04_GAMEMANAGER_HPP


#include <list>
#include "Humanoid.hpp"

class GameManager {

private:
    size_t _width;
    size_t _height;
    size_t _humainsNb;
    size_t _vampiresNb;


    const char _cornerBorderChar = '+';
    const char _upDownBorderChar = '-';
    const char _leftRightBorderChar = '|';

public:
    std::list<Humanoid*> _humanoids;
    GameManager(size_t width, size_t height, size_t humainsNb, size_t vampiresNb);

    void displayGameState() const;
};


#endif //POO2_LABO04_GAMEMANAGER_HPP
