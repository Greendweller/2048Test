#include <iostream>
#include <algorithm>

#include "Randomiser.h"
#include "BoardInitializer.h"

using namespace std;

int BoardInitializer::mainBoardstart() {

//caal the randomiser class and create 2 different objects from it
    Randomiser randomObject;
    Randomiser randomObject2;

// call the 2 diff. functions in the class and assign the objects to variables (for easy use in this function.)
    int a = randomObject.startValue1();
    int b = randomObject2.startValue2();


//initialize 2 dimentional array and add the 2 starting variables/objects.
    int board[4][4] = {{a,0,0,0},
                      {0,0,0,0},
                      {0,0,0,0},
                      {0,0,0,b}
                      };

//Randomize the elements in the 2 dimentional array.
    int *random = &board[0][0];  // create a pointer and assign the address of board[0][0] to it.
    random_shuffle(random, random + 4*4); // randomise all elements over the 2 dimentions.

//print out the array to console after the board is randomised (for testing/checking only)
    for(int row = 0; row<4; row++){

    for (int column = 0; column<4; column++){
            cout << board[row][column] << " ";
        }
        cout << endl << endl;
    }
    //return value??? not sure how to return a 2d array. Probably something like (*random) or something?
}
