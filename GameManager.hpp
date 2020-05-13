//
// Created by loic on 5/13/20.
//

#ifndef POO2_LABO04_GAMEMANAGER_HPP
#define POO2_LABO04_GAMEMANAGER_HPP


#include <list>
#include "Humanoid.hpp"

class GameManager {

private:
    int _width;
    int _height;
    int _humainsNb;
    int _vampiresNb;


    char _cornerBorderChar = '+';
    char _upDownBorderChar = '-';
    char _leftRightBorderChar = '|';

public:
    std::list<Humanoid*> _humanoids;
    GameManager(int width, int height, int humainsNb, int vampiresNb);

    void displayGameState() const;
};


#endif //POO2_LABO04_GAMEMANAGER_HPP
