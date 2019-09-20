#include "lab11.h"
#include <stdio.h>

int main() {
    int numFact;
    printf("Please enter an integer\n");
    scanf("%d", &numFact);
    printf("The factorial of %d is %d.\n", numFact, numFactorial(numFact));

    int numPrime;
    printf("Please enter an integer\n");
    scanf("%d", &numPrime);
    if (isPrime(numPrime) == 1) {
        printf("%d value is a prime number.\n", numPrime);
    }
    else {
        printf("%d value is not a prime number.\n", numPrime);

    }

    int numFloyd;
    printf("Please enter an integer\n");
    scanf("%d", &numFloyd);
    floydsTriangle(numFloyd);

    return 0;
}

int numFactorial(int number) {
    int i;
    int oneLess;
    for (i = number; i > 2; --i) {
        oneLess = i - 1;
        number = number * oneLess;
    }
    return number;
}

int isPrime(int number) {
    int i;
    for (i = 2; i >= (number / 2); ++i) {
        if (number%i == 0) {
            return 0;
        }
    }
    return 1;

}

void floydsTriangle(int number) {
    int numRows;
    int whichColumn;
    for (numRows = 0; numRows < number; ++numRows) {
        for (whichColumn = 0; whichColumn <= numRows; ++whichColumn) {
            if (((numRows + whichColumn) % 2) == 0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}