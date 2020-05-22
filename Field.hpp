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
    int _turn;
    Displayer* _displayer;

public:
    Field(size_t width, size_t height, size_t humansNb, size_t vampiresNb);

    ~Field();

    void displayGame() const;

    /**
     * Auto plays the full game and stops when there's no more vampire.
     * @return true if a least one human remains.
     */
    bool autoRun();

    Humanoid* findNearest(const Humanoid* h, char targetSymbol);

    int nextTurn();

    void clearHumanoids() const;

    void addHumanoid(Humanoid* h);

    /**
     * Calculates absolute hypotenuse distance between two humanoids
     * @param h1
     * @param h2
     * @return
     */
    static size_t distanceBetween(const Humanoid* h1, const Humanoid* h2);


    /* GETTERS */

    size_t getWidth() const;

    size_t getHeight() const;

    size_t getHumansNb() const;

    size_t getVampiresNb() const;

    const std::list<Humanoid *> &getHumanoids() const;

    int getTurn() const;


    void decrementHumansNb();
    void decrementVampiresNb();
    void incrementVampiresNb();

private:

    /**
     * Calculates the absolute value of the difference between two unsigned integers.
     * @param dist1
     * @param dist2
     * @return absolute value of the difference
     */
    static size_t distanceDifference(size_t dist1, size_t dist2);
};


#endif //POO2_LABO04_FIELD_HPP
