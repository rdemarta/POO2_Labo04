/**
 * File: main.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include <iostream>
#include "Field.hpp"
#include "UniformRandom.hpp"

using namespace std;

int main(int argc, char *argv[]) {

    if(argc != 4 + 1){
        cout << "Error: 4 params needed" << endl;
        return EXIT_FAILURE;
    } else {
        const size_t minWidth = 2;
        const size_t minHumanoidType = 0;

        size_t width = (size_t)atoi(argv[1]);
        size_t height = (size_t)atoi(argv[2]);
        size_t humansNb = (size_t)atoi(argv[3]);
        size_t vampiresNb = (size_t)atoi(argv[4]);

        // Check correct parameters
        if(width < minWidth || height < minWidth || humansNb < minHumanoidType || vampiresNb < minHumanoidType) {
            cout << "Error: invalid parameters" << endl;
            return EXIT_FAILURE;
        }

        Field field = Field(width, height, humansNb, vampiresNb);
        field.displayGame();
    }

    return EXIT_SUCCESS;
}
