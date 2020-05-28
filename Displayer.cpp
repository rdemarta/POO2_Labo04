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
    std::cout << CORNER_BORDER_CHAR << std::setfill(UP_DOWN_BORDER_CHAR) << std::setw((int)_field->getWidth() + 1) << CORNER_BORDER_CHAR << std::endl;
    for(size_t y = 0; y < _field->getHeight(); ++y){
        std::cout << LEFT_RIGHT_BORDER_CHAR;
        for(size_t x = 0; x < _field->getWidth(); ++x){
            char charToDisplay = '.'; // TODO set to ' ' (as '.' is for debugging)
            for(Humanoid* humanoid: _field->getHumanoids()){
                if(humanoid->getPosX() == x && humanoid->getPosY() == y){
                    charToDisplay = humanoid->getSymbol();
                }
            }
            std::cout << charToDisplay;
        }
        std::cout << LEFT_RIGHT_BORDER_CHAR << std::endl;
    }
    std::cout << CORNER_BORDER_CHAR << std::setfill(UP_DOWN_BORDER_CHAR) << std::setw((int)_field->getWidth() + 1) << CORNER_BORDER_CHAR << std::endl;

    askForCommand();
}


void Displayer::askForCommand() const {
    char c;

    std::cout << "[" << _field->getTurn() << "] q)uit s)tatistic n)ext: ";
    std::cin >> c;

    switch(c) {
        case QUIT_CHAR:
            break;
        case NEXT_CHAR:
            _field->nextTurn();
            displayGame();
            break;
        case STATS_CHAR: {
            int buffyVictories = 0;

            for(unsigned i = 0; i < GAME_NB_PER_SIMULATION; ++i) {
                Field testingField(50, 50, 10, 10);
                if(testingField.autoRun()) {
                    ++buffyVictories;
                }
            }

            double successRate = (double)(buffyVictories * 100) / GAME_NB_PER_SIMULATION;
            std::cout << successRate << "% success" << std::endl;

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
