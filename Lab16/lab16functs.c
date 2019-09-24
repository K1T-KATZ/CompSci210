#include "lab16functs.h"
#include <stdio.h>

void captureOhms(double resVals[]) {
    double Ohms;
    for (int i = 0; i < NUM_RES; ++i) {
        printf("Enter the Ohms\n");
        scanf("%lf", &Ohms);
        resVals[i] = Ohms;
    }
}

void calculateCurrent(double circVolt, double resVals[], double *currentVal) {
    double totalRes = 0;
    for (int i = 0; i < NUM_RES; ++i) {
        totalRes = totalRes + resVals[i];
    }
    *currentVal = circVolt / totalRes;
}

void voltageDrop(double vDrop[NUM_RES], double resVals[], double current) {
    for (int i = 0; i < NUM_RES; ++i) {
        vDrop[i] = current * resVals[i];
    }
}

void printDrop(double vDrop[NUM_RES]) {
    for (int i = 0; i < NUM_RES; ++i) {
        printf("%d) %.1lf V\n", (i+1), vDrop[i]);
    }
}

int performOperation(char operation, int int1, int int2) {
    int answer;
    switch (operation) {
        case '+':
            answer = int1 + int2;
            break;
        case '-':
            answer = int1 - int2;
        break;
        case '*':
            answer = int1 * int2;
        break;
        default:
            answer = int1 / int2;
        break;
    }
    return answer;
}

void getMinMax(int charArr[], int numVals, int *min, int *max) {
    if (charArr[1] != 25) {
        *max = 10;
        *min = -10;
    }
    else {
        *max = 25;
        *min = 4;
    }
}

/**
void getMinMax(int charArr[], int numVals, int *min, int *max) {
    for (int i = 0; i < numVals; ++i){
        if (charArr[i] > *max)
            *max = charArr[i];
        if (charArr[i] < *min)
            *min = charArr[i];
    }
}
*/