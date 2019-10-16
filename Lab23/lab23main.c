#include <stdio.h>
#include "lab23functs.h"

int main() {
    //char dataFile[100] = "C:\\Users\\C22Christopher.Katz\\Documents\\19_fall_school\\CompSci210\\Labs\\Lab23\\lab23Data.txt";
    char dataFile[100] = "lab23Data.txt";
    int numRecs = getNumRecs(dataFile);
    printf("%d records in the data file.\n", numRecs);

    CadetInfoStructType *cadetInfo = (CadetInfoStructType*)malloc(sizeof(CadetInfoStructType) * numRecs);

    getDataText(cadetInfo, numRecs, dataFile);

    printf("The first cadet is:\n");
    printCadetInfo(cadetInfo[0]);
    printf("The last cadet is:\n");
    printCadetInfo(cadetInfo[numRecs-1]);


    return 0;
}