/** lab28.h
* ===========================================================
* Name: Christopher Katz, 25 Oct 2019
* Section: T1/2
* Project: Progamming Assessment 3 Practice
* Documentation: Lolz no one
* ===========================================================  */

#ifndef MYEXE_LAB28_H
#define MYEXE_LAB28_H

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct EmployeeBD {
    char *FirstName;
    char *lastName;
    char *birthMonth;
    int *birthDate;
}EmployeeBD;

int numVowels(char myArr[]);
char* sortString(char mySecondArr[]);
int getNumLines(char filename[]);

#endif //MYEXE_LAB28_H
