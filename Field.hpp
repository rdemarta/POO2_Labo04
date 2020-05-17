//
// Created by loic on 5/13/20.
//

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
    Field(size_t width, size_t height, size_t humainsNb, size_t vampiresNb);

    ~Field();

    void displayGame() const;

    Humanoid* findNearest(Humanoid* h, char targetSymbol);

    Humanoid* getHumanoidByPosition();

    int nextTurn();

    void clearHumanoids() const;


    /* GETTERS */

    size_t getWidth() const;

    size_t getHeight() const;

    size_t getHumansNb() const;

    size_t getVampiresNb() const;

    const std::list<Humanoid *> &getHumanoids() const;

    int getTurn() const;

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
