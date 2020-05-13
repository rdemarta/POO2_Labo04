//
// Created by loic on 5/13/20.
//

#include <time.h>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "GameManager.hpp"
#include "Humain.hpp"
#include "Vampire.hpp"

GameManager::GameManager(int width, int height, int humainsNb, int vampiresNb) :
    _width(width), _height(height), _humainsNb(humainsNb), _vampiresNb(vampiresNb)
{
    // Seed the random with current time to have all the time new random sequence
    srand((unsigned int)time(NULL));

    int randX, randY;
    // Fill all humains with random position
    for(int i = 0; i < _humainsNb; ++i){
        randX = rand() % (_width);
        randY = rand() % (_height);
       _humanoids.push_back(new Humain(randX, randY));
    }
    // Fill all vampires with random position
    for(int i = 0; i < vampiresNb; ++i){
        randX = rand() % (_width);
        randY = rand() % (_height);
        _humanoids.push_back(new Vampire(randX, randY));
    }

}

void GameManager::displayGameState() const {
    std::cout << _cornerBorderChar << std::setfill(_upDownBorderChar) << std::setw(_width + 1) << _cornerBorderChar << std::endl;
    for(int y = 0; y < _height; ++y){
        std::cout << _leftRightBorderChar;
        for(int x = 0; x < _width; ++x){
            char charToDisplay = ' ';
            for(Humanoid* humanoid: _humanoids){
                if(humanoid->getPosX() == x && humanoid->getPosY() == y){
                    charToDisplay = humanoid->getSymbol();
                }
            }
            std::cout << charToDisplay;
        }
        std::cout << _leftRightBorderChar << std::endl;
    }
    std::cout << _cornerBorderChar << std::setfill(_upDownBorderChar) << std::setw(_width + 1) << _cornerBorderChar << std::endl;
}

