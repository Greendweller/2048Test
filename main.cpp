#include <iostream>

#include "Randomiser.h"
#include "BoardInitializer.h"
#include "InputKeys.h"

using namespace std;

//main program
int main(){

    BoardInitializer start;
    start.mainBoardstart();

    InputKeys a;
    a.StartInput();

    return 0;
}
