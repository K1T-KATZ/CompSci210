#include "lab14functs.h"

int findMaxIndex(int arr[], int size) {
    int maxI = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > arr[maxI])
            maxI = i;
    }

    return maxI;
}

int numPlayerOverX(int *arr, int threshold, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > threshold)
            count++;
    }
    return count;
}

/**
int getMaxYardsPerCarryIndex(int threshold, int *yds, int *atm) {
    int playerIndex = 0;
    double max = 0.0;
    double testVal;
    for (int i = 0; i < 316; i++) {
        if (atm[i] > threshold) {
            testVal = (double)yds[i] / atm[i];
            if (testVal > max) {
                max = testVal;
                playerIndex = i;
            }
        }
    }
    return playerIndex;
} */
int getMaxYardsPerCarryIndex(int threshold, int * yds, int * att) {
    int index = 0;
    double max = 0.0;
    double ydsPerCarry;
    for (int i = 0; i < 316; i++) {
        if (att[i] > threshold) {
            ydsPerCarry = (double)yds[i]/att[i];
            if (ydsPerCarry > max) {
                max = ydsPerCarry;
                index = i;
            }
        }
    }

    return index;
}
