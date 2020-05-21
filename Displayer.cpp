/**
 * File: Displayer.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include <time.h>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <climits>
#include "Displayer.hpp"
#include "Human.hpp"
#include "Vampire.hpp"


Displayer::Displayer(Field* field) : _field(field) {}

void Displayer::displayGame() const {
    std::cout << _cornerBorderChar << std::setfill(_upDownBorderChar) << std::setw((int)_field->getWidth() + 1) << _cornerBorderChar << std::endl;
    for(size_t y = 0; y < _field->getHeight(); ++y){
        std::cout << _leftRightBorderChar;
        for(size_t x = 0; x < _field->getWidth(); ++x){
            char charToDisplay = '.'; // TODO set to ' ' (as '.' is for debugging)
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

    askForCommand();
}


void Displayer::askForCommand() const {
    char c;

    std::cout << "[" << _field->getTurn() << "] q)uit s)tatistic n)ext: ";
    std::cin >> c;

    switch(c) {
        case _quitChar:
            _field->clearHumanoids();
            break;
        case _nextChar:
            _field->nextTurn();
            displayGame();
            break;
        case _statsChar:
            // Todo: do stats
            break;
        default:
            // Clear the cin buffer in case of user typed more than 1 char
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            // Re-ask a command
            askForCommand();
            break;
    }
}

Displayer::~Displayer() {
    // Todo: Remove debug
    std::cout << "Displayer clear" << std::endl;
}
