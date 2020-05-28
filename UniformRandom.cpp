/**
 * File: UniformRandom.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 28.05.2020
 */

#include <random>
#include <chrono>
#include "UniformRandom.hpp"

// Doc for random generator here : http://www.cplusplus.com/reference/random/uniform_int_distribution/operator()/
UniformRandom::UniformRandom():
    _distribution(0,1), // Default distribution is [0,1]
    _generator((unsigned)std::chrono::system_clock::now().time_since_epoch().count()) // Seed with current time
{}

int UniformRandom::rand(int min, int max) {
    _distribution = std::uniform_int_distribution<int>(min, max);
    return _distribution(_generator);
}

UniformRandom &UniformRandom::getInstance() {
    // Instantiated on first use.
    static UniformRandom INSTANCE;// Guaranteed to be destroyed.

    return INSTANCE;
}

