/**
 * File: main.cpp
 * Authors: Robin Demarta & Loïc Dessaules
 * Date: 30.04.2020
 */

#include <iostream>
#include "Displayer.hpp"
#include "Field.hpp"

using namespace std;

int main(int argc, char *argv[]) {

    if(argc != 4 + 1){
        // Todo change error message
        cout << "Error : 4 params needed" << endl;
    } else {
        int width = atoi(argv[1]);
        int height = atoi(argv[2]);
        int humainsNb = atoi(argv[3]);
        int vampiresNb = atoi(argv[4]);

        Field field = Field(width, height, humainsNb, vampiresNb);
        field.displayGame();


    }

    return 0;
}
