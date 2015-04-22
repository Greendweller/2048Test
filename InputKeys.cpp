#include <iostream>
#include <conio.h>

#include "InputKeys.h"

using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int InputKeys::StartInput(){

    cout << "Use arrowkeys for input and generate randomly nr 2 or 4." << endl;

    int c = 0;

    {
        switch((c=getch())){

        case KEY_UP:

            return 0;

        case KEY_DOWN:

            return 0;

        case KEY_LEFT:

            return 0;

        case KEY_RIGHT:

            return 0;

        default:

            return 0;

        }

    }

    return 0;
}

