//
// Created by loic on 5/13/20.
//

#include <time.h>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "Displayer.hpp"
#include "Humain.hpp"
#include "Vampire.hpp"


Displayer::Displayer(Field* field) : _field(field) {}

void Displayer::displayGame() const {
    std::cout << _cornerBorderChar << std::setfill(_upDownBorderChar) << std::setw((int)_field->getWidth() + 1) << _cornerBorderChar << std::endl;
    for(size_t y = 0; y < _field->getHeight(); ++y){
        std::cout << _leftRightBorderChar;
        for(size_t x = 0; x < _field->getWidth(); ++x){
            char charToDisplay = ' ';
            for(Humanoid* humanoid: _field->getHumanoids()){
                if(humanoid->getPosX() == x && humanoid->getPosY() == y){
                    charToDisplay = humanoid->getSymbol();
                }
            }
            std::cout << charToDisplay;
        }
        std::cout << _leftRightBorderChar << std::endl;
    }
    std::cout << _cornerBorderChar << std::setfill(_upDownBorderChar) << std::setw((int)_field->getWidth() + 1) << _cornerBorderChar << std::endl;

    // Display debug humanoids coord
    for(Humanoid* h : _field->getHumanoids()){
        std::cout << h->getSymbol() << ": " << h->getPosX() << ";" << h->getPosY() << std::endl;
    }

}

