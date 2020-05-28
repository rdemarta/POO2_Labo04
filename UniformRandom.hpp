//
// Created by loic on 5/28/20.
//

#ifndef POO2_LABO04_UNIFORMRANDOM_HPP
#define POO2_LABO04_UNIFORMRANDOM_HPP

#include <random>

class UniformRandom {

private:
    std::uniform_int_distribution<int> _distribution;
    std::default_random_engine _generator;

    UniformRandom();

public:

    UniformRandom(UniformRandom const&) = delete;
    void operator=(UniformRandom const&) = delete;

    static UniformRandom& getInstance();

    int rand(int min, int max);

};


#endif //POO2_LABO04_UNIFORMRANDOM_HPP
