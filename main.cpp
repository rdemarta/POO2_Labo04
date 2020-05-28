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
        const int minWidth = 2;
        const int minHumanoidType = 0;

        int width = atoi(argv[1]);
        int height = atoi(argv[2]);
        int humansNb = atoi(argv[3]);
        int vampiresNb = atoi(argv[4]);

        // Check correct parameters
        if(width < minWidth || height < minWidth || humansNb < minHumanoidType || vampiresNb < minHumanoidType) {
            cout << "Error: invalid parameters" << endl;
            return EXIT_FAILURE;
        }

        Field field = Field((size_t)width, (size_t)height, (size_t)humansNb, (size_t)vampiresNb);
        field.displayGame();
    }

    return EXIT_SUCCESS;
}
