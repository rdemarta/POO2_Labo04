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
    size_t _initialHumansNb;
    size_t _initialVampiresNb;

    static const char CORNER_BORDER_CHAR = '+';
    static const char UP_DOWN_BORDER_CHAR = '-';
    static const char LEFT_RIGHT_BORDER_CHAR = '|';
    // constexpr used to be able to use the char inside a switch case bloc
    static constexpr char QUIT_CHAR = 'q';
    static constexpr char  NEXT_CHAR = 'n';
    static constexpr char STATS_CHAR = 's';
    static const unsigned GAME_NB_PER_SIMULATION = 10000;

public:
    Displayer(Field* field, size_t initialHumansNb, size_t initialVampiresNb);
    ~Displayer();

    /**
     * Writes the Displayer's Field grid, showing borders and all Humanoids
     * Note: if multiple Humanoid stand on the same position, only one will be drawn
     */
    void displayGame() const;

private:
    void askForCommand() const;
};


#endif //POO2_LABO04_DISPLAYER_HPP
