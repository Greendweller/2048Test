#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Randomiser.h"

using namespace std;

//function that returns randomly a 2 or a 4
int Randomiser::startValue1(){

    srand(time_t(NULL));                 // use of time_t here for testing reasons
    int arrayStart[2] = {2, 4};
    int randIndex = rand() % 2;

    return arrayStart[randIndex];
}

//function that returns randomly a 2 or a 4
int Randomiser::startValue2(){

    srand(time(NULL));                   // use of time here for testing reasons
    int arrayStart[2] = {2, 4};
    int randIndex = rand() % 2;

    return arrayStart[randIndex];
}
