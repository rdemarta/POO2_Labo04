/**
 * File: UniformRandom.hpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 28.05.2020
 */

#ifndef POO2_LABO04_UNIFORMRANDOM_HPP
#define POO2_LABO04_UNIFORMRANDOM_HPP

#include <random>

/**
 * This class is a custom random singleton class. This way we can use the CPP random generator as we want in place
 * of the old c-ctyle random.
 */
class UniformRandom {

private:
    std::uniform_int_distribution<int> _distribution;
    std::default_random_engine _generator;

    UniformRandom();

public:

    UniformRandom(UniformRandom const&) = delete;
    void operator=(UniformRandom const&) = delete;

    /**
     * Get the unique instance of UniformRandom
     * @return A unique UniformRandom object
     */
    static UniformRandom& getInstance();

    /**
     * Generates a random integer between given range [min;max]
     * @param min minimum value (inclusive)
     * @param max maximum value (inclusive)
     * @return Random integer
     */
    int rand(int min, int max);

};


#endif //POO2_LABO04_UNIFORMRANDOM_HPP
