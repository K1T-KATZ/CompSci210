#define NUM_RES 5
#include <math.h>
#include <stdio.h>

void captureOhms(double resVals[]);
void calculateCurrent(double circVolt, double resVals[], double *currentVal);
void voltageDrop(double vDrop[], double resVals[], double current);
void printDrop(double vDrop[]);
int performOperation(char operation, int int1, int int2);
void getMinMax(int charArr[], int numVals, int *min, int *max);