/**
 * File: main.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include <iostream>
#include "Field.hpp"

using namespace std;

int main(int argc, char *argv[]) {

    if(argc != 4 + 1){
        // Todo change error message
        cout << "Error : 4 params needed" << endl;
    } else {
        int width = atoi(argv[1]);
        int height = atoi(argv[2]);
        int humansNb = atoi(argv[3]);
        int vampiresNb = atoi(argv[4]);

        // Seed the random with current time to have all the time new random sequence
        srand((unsigned int)time(NULL));


        Field field = Field((size_t)width, (size_t)height, (size_t)humansNb, (size_t)vampiresNb);
        field.displayGame();
    }

    return 0;
}
