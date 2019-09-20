#include "lab13.h"

int main() {
    int year;
    int integer;
    int intA;
    int intB;
    int sum;
    int numFact;
    long longNum = 0;

    printf("Please enter your class year:\n");
    scanf("%d", &year);
    printf("Please enter your favorite integer:\n");
    scanf("%d", &integer);
    swapPassByValue(year, integer);
    printf("aNum = %d, ", year);
    printf("bNum = %d\n", integer);

    swapPassByPointer(&year, &integer);
    printf("aNum = %d, ", year);
    printf("bNum = %d\n", integer);

    printf("Please enter two integers separated by a space:\n");
    scanf("%d %d", &intA, &intB);
    sum = pointerSum(&intA, &intB);
    printf( "The sum of %d and %d = %d\n", intA, intB, sum);

    printf("Please enter a low integer\n");
    scanf("%d", &numFact);
    findFactorial(numFact,&longNum);
    printf("The factorial of %d is %ld", numFact, longNum);
    return 0;
}

void swapPassByValue(int year, int integer) {
    int tempA = year;
    year = integer;
    integer = tempA;
}


void swapPassByPointer(int *year, int *integer) {
    int tempA = *year;
    *year = *integer;
    *integer = tempA;
}

int pointerSum(int* intA, int* intB) {
    int sum;
    sum = *intA + *intB;
    return sum;
}

void findFactorial(int numFact, long *longNum) {
    *longNum = 1;
    int i;
    for (i = numFact; i >= 1; --i) {
        *longNum = *longNum * i;
    }
}