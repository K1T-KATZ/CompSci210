/**
 * I am kitkatz
 * cs210
 */

 #include "lab15functs.h"

int findMaxIndex(int MyArray[][DATACOLS], int size, int column) {
    int maxI = 0;
    for (int i = 0; i < size; i++) {
        if (MyArray[i][column] > MyArray[maxI][column])
            maxI = i;
    }

    return maxI;
}

int numPlayerOverX(int MyArray[][DATACOLS], int threshold, int size, int column) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (MyArray[i][column] > threshold)
            count++;
    }
    return count;
}

int getMaxYardsPerCarryIndex(int threshold, int MyArray[][DATACOLS]) {
    int rowYds = 1;
    int rowAtm = 0;
    int index = 0;
    double max = 0.0;
    double ydsPerCarry;
    for (int i = 0; i < 316; i++) {
        if (MyArray[i][rowAtm] > threshold) {
            ydsPerCarry = (double)MyArray[i][rowYds]/MyArray[i][rowAtm];
            if (ydsPerCarry > max) {
                max = ydsPerCarry;
                index = i;
            }
        }
    }

    return index;
}

double getMaxYardsPerCarry(int MyArray[][DATACOLS], int playerIndex) {
    double ydsPerCarry = (double)MyArray[playerIndex][1] / MyArray[playerIndex][0];
    return ydsPerCarry;
}