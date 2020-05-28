//
// Created by loic on 5/28/20.
//

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
    static UniformRandom INSTANCE;// Guaranteed to be destroyed.
    // Instantiated on first use.
    return INSTANCE;
}

