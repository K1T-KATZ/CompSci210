#include "lab10functs.h"

bool isFirstHalfAlpha(char letter) {
    bool isLess;
    //letter = tolower(letter);
    if (((letter >= 'a') && (letter <= 'm')) || ((letter >= 'A') && (letter <= 'M'))) {
        isLess = true;
    }
    else {
        isLess = false;
    }
    return isLess;
}

int typeOfChar(char letter) {
    letter = tolower(letter);
    switch (letter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 0;
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            return 1;
        default:
            return -1;
    }
}

bool isMagicChar(char letter) {
    return (letter == MAGIC_CHAR) ? true:false;
}