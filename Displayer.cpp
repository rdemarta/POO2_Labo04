/**
 * File: Displayer.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include <ctime>
#include <iostream>
#include <iomanip>
#include <climits>
#include "Displayer.hpp"


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
        case _statsChar: {
            int buffyVictories = 0;

            for(unsigned i = 0; i < gameNbPerSimulation; ++i) {
                Field testingField(50, 50, 10, 10);
                if(testingField.autoRun()) {
                    ++buffyVictories;
                }
            }

            double successRate = (double)(buffyVictories * 100) / gameNbPerSimulation;
            std::cout << successRate << "% success" << std::endl;

            // TODO : _field->clearHumanoids(); ? Quand est-il de la memire allouée dynamiquement dan testingField ou dans _field ?

            break;
        }
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
}
