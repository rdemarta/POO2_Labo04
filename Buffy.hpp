/**
 * File: Buffy.hpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#ifndef POO2_LABO04_BUFFY_HPP
#define POO2_LABO04_BUFFY_HPP


#include "Humanoid.hpp"

class Buffy : public Humanoid{
private:
    static const char SYMBOL = 'B';
    static const size_t MOVE_DISTANCE = 2;

public:
    /**
     * Constructor
     * @param posX The X position
     * @param posY The Y position
     * @param action the associate Action
     */
    Buffy(size_t posX, size_t posY, Action* action);

    /**
     * Return the Buffy symbol
     * @return The symbol associate to the Buffy class
     */
    char getSymbol() const override;

    /**
     * Return the move distance
     * @return The move distance associate to the Buffy class
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


#endif //POO2_LABO04_BUFFY_HPP
