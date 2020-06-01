/**
 * File: Field.hpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#ifndef POO2_LABO04_FIELD_HPP
#define POO2_LABO04_FIELD_HPP

#include <list>
#include "Humanoid.hpp"
#include "Displayer.hpp"

class Humanoid;
class Displayer;

class Field {

private:
    size_t _width;
    size_t _height;
    size_t _humansNb;
    size_t _vampiresNb;
    std::list<Humanoid*> _humanoids;
    size_t _turn;
    Displayer* _displayer;

public:
    /**
     * Constructor
     * @param width The grid width
     * @param height The grid height
     * @param humansNb The initial number of Humans
     * @param vampiresNb The initial number of Vampires
     */
    Field(size_t width, size_t height, size_t humansNb, size_t vampiresNb);

    /**
     * The destructor
     */
    ~Field();

    /**
     * Display the game through the Displayer class
     */
    void displayGame() const;

    /**
     * Auto plays the full game and stops when there's no more vampire.
     * @return true if a least one human remains.
     */
    bool autoRun();

    /**
     * Searches the nearest Humanoid (of given symbol)
     * @param h Humanoid from which to search
     * @param targetSymbol target type
     * @return The nearest Humanoid
     */
    Humanoid* findNearest(const Humanoid* h, char targetSymbol);

    /**
     * Proceeds to apply Humanoids' Actions
     * @return the current turn's number
     */
    size_t nextTurn();

    /**
     * Deletes all remaining Humanoids from the Field
     */
    void clearHumanoids() const;

    /**
     * Inserts an Humanoid into the list
     * @param h Humanoid to insert
     */
    void addHumanoid(Humanoid* h);

    /**
     * Calculates absolute hypotenuse distance between two humanoids
     * @param h1 The first Humanoid
     * @param h2 The first Humanoid
     * @return The absolute hypotenuse distance between the two Humanoid
     */
    static size_t distanceBetween(const Humanoid* h1, const Humanoid* h2);

    /**
     * Decrement by 1 the humansNb
     */
    void decrementHumansNb();

    /**
     * Decrement by 1 the vampiresNb
     */
    void decrementVampiresNb();

    /**
     * Increment the vampiresNb
     */
    void incrementVampiresNb();


    // Getters
    size_t getWidth() const;
    size_t getHeight() const;
    size_t getHumansNb() const;
    size_t getVampiresNb() const;
    const std::list<Humanoid *>& getHumanoids() const;
    size_t getTurn() const;

private:

    /**
     * Calculates the absolute value of the difference between two unsigned integers.
     * @param dist1 The first distance
     * @param dist2 The second distance
     * @return absolute value of the difference
     */
    static size_t distanceDifference(size_t dist1, size_t dist2);
};


#endif //POO2_LABO04_FIELD_HPP
