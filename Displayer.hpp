/**
 * File: Displayer.hpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#ifndef POO2_LABO04_DISPLAYER_HPP
#define POO2_LABO04_DISPLAYER_HPP


#include "Field.hpp"

class Field;

class Displayer {
    Field* _field;

    const char _cornerBorderChar = '+';
    const char _upDownBorderChar = '-';
    const char _leftRightBorderChar = '|';
    static constexpr char _quitChar = 'q';
    static constexpr char _nextChar = 'n';
    static constexpr char _statsChar = 's';
    static const unsigned gameNbPerSimulation = 10000;

public:
    Displayer(Field* field);
    ~Displayer();

    void displayGame() const;

private:
    void askForCommand() const;
};


#endif //POO2_LABO04_DISPLAYER_HPP
