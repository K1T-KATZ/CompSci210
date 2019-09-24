#include "lab16functs.h"
int main() {
    double resVals[NUM_RES];
    double circVolt = 12;
    double vDrop[NUM_RES];
    double currentVal;

    captureOhms(resVals);
    calculateCurrent(circVolt, resVals, &currentVal);
    voltageDrop(vDrop, resVals, currentVal);
    printDrop(vDrop);

    int opinion;

    printf("Survey response scale: 10 - Outstanding, 8-9 - Excellent, 6-7 - Good, 5 - Average, \n"
           "3-4 - Below Average, 1-2 - Awful, 0 - Horrible.\n"
           "Enter an integer value from 0-10 corresponding to your opinion of Cookies 'n Cream ice cream:\n");
    scanf("%d", &opinion);
    switch (opinion) {
        case 10:
            printf("Outstanding\n");
            break;
        case 9:
        case 8:
            printf("Excellent\n");
            break;
        case 7:
        case 6:
            printf("Good\n");
        case 5:
            printf("Average\n");
            break;
        case 4:
        case 3:
            printf("Below Average\n");
            break;
        case 2:
        case 1:
            printf("Awful\n");
            break;
        default:
            printf("Horrible\n");
            break;
    }

    char operation;
    int int1;
    int int2;
    printf("input the character denoting the requested operation (+, -, *, /)\n");
    scanf(" %c", &operation);
    printf("input two positive integer values, which are the operands\n");
    scanf(" %d %d", &int1, &int2);
    printf("%d\n\n", performOperation(operation, int1, int2));

    int charArr[5]; // = {25, 4, 5, 10, 7};
    for (int i = 0; i < 5; ++i) {
        printf("Enter a value for the %dth term ", i);
        scanf("%d", &charArr[i]);
        //printf("%d\n", charArr[i]);
    }
    int numVals = 6;
    int min = 999;
    int max = 0;
    getMinMax(charArr, numVals, &min, &max);
    printf("The min is: %d\nThe max is: %d\n", min, max);
    return 0;
}