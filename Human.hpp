/**
 * File: Human.hpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#ifndef POO2_LABO04_HUMAN_HPP
#define POO2_LABO04_HUMAN_HPP


#include "Humanoid.hpp"

class Human : public Humanoid{

private:
    static const char SYMBOL = 'h';
    static const size_t MOVE_DISTANCE = 1;

public:
    /**
     * Constructor
     * @param posX The X position
     * @param posY The Y position
     * @param action the associate Action
     */
    Human(size_t posX, size_t posY, Action* action);

    /**
    * Return the Human symbol
    * @return The symbol associate to the Human class
    */
    char getSymbol() const override;

    /**
     * Return the move distance
     * @return The move distance associate to the Human class
     */
    size_t getMoveDistance() const override;

    /**
     * Set the Action
     * @param f The field
     */
    void setAction(Field *f) const override;

    /**
     * Execute the action
     * @param f The field
     */
    void executeAction(Field *f) const override;

};


#endif //POO2_LABO04_HUMAN_HPP
