#include "lab23functs.h"

/** ----------------------------------------------------------
 * Reads the number of records from the data file
 * @param dataFile is a string that indicates the path to and filename of the datafile
 * @return number of records in the file or -1 on error
 * ----------------------------------------------------------
 */

int getNumRecs(char *dataFile){
    int numRecs;
    char temp[20];
    FILE* inFile = fopen(dataFile, "r");
    printf("Reading number of records in the data file.\n");
    if (inFile == NULL) {
        printf("Could not open file %s.\n", dataFile);
        return(-1); // -1 indicates error
    }

    fgets(temp, 20, inFile);
    temp[strlen(temp) - 1] = '\0';
    sscanf(temp, "%d", &numRecs);

    fclose(inFile);
    return numRecs;
}


/** ----------------------------------------------------------
 * Reads CadetInfoStructType  records from a text file
 * @param cadetRecords is the array of cadet records
 * @param numRecs is the number of records in the file
 * @param dataFile is a string that indicates the path to and filename of the datafile
 * ----------------------------------------------------------
 */

void getDataText(CadetInfoStructType *cadetRecords, int numRecs, char* dataFile){
    FILE* inFile = fopen(dataFile, "r");
    if(inFile == NULL)  {
        perror("Error opening file.\n");
    }
    fseek(inFile, sizeof(int), SEEK_SET);
    int i = 0;
    char lastName[20];
    while (!feof(inFile) && i < numRecs) {
        fscanf(inFile, "%s %s %d %d %d", lastName, cadetRecords[i].name, &cadetRecords[i].age, &cadetRecords[i].squad, &cadetRecords[i].year);
        strcat(cadetRecords[i].name, " ");
        strcat(cadetRecords[i].name, lastName);
        ++i;
    }
    fclose(inFile);
}

void printCadetInfo(CadetInfoStructType cadetRecords) {
    printf("Cadet name = %s\n", cadetRecords.name);
    printf("Cadet age = %d\n", cadetRecords.age);
    printf("Cadet squad = %d\n", cadetRecords.squad);
    printf("Cadet year = %d\n", cadetRecords.year);
}