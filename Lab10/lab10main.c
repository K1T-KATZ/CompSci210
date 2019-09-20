#include "lab10functs.h"

//bool isFirstHalfAlpha(char);

int main() {
    //------------------------------------------------------
    //------------------------------------------------------
    char letter1;
    printf("Enter a single character to pass to isFirstHalfAlpha():\n");
    scanf(" %c", &letter1);
    if (isFirstHalfAlpha(letter1) == true) {
        printf("A %c is in the first half of the alphabet.\n", letter1);
    }
    else {
        printf("A %c is NOT in the first half of the alphabet.\n", letter1);
    }
    //------------------------------------------------------
    //------------------------------------------------------
    char letter2;
    printf("Enter a single character to pass to typeOfChar():\n");
    scanf(" %c", &letter2);
    if (typeOfChar(letter2) == 0) {
        printf("A %c is a vowel.\n", letter2);
    }
    else if (typeOfChar(letter2) == 1) {
        printf("A %c is a consonant.\n", letter2);
    }
    else {
        printf("A %c is neither a vowel nor a consonant.\n", letter2);
    }
    //------------------------------------------------------
    //------------------------------------------------------
    char letter3;
    printf("Enter a single character to pass to isMagicChar():\n");
    scanf(" %c", &letter3);
    if (isMagicChar(letter3) == true) {
        printf("A %c is the magic character @.\n", letter3);
    }
    else {
        printf("A %c is NOT the magic character @.\n", letter3);
    }
    //------------------------------------------------------
    //------------------------------------------------------
    return 0;
}

