
#ifndef LESSON23_LAB23FUNCTS_H
#define LESSON23_LAB23FUNCTS_H

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>


typedef struct CadetInfoStruct {
    char name[50];
    int age;
    int squad;
    int year;
} CadetInfoStructType;


int getNumRecs(char* dataFile);
void getDataText(CadetInfoStructType *cadetRecords, int numRecs, char* dataFile);
void printCadetInfo(CadetInfoStructType cadetRecords);

#endif //LESSON23_LAB23FUNCTS_H
