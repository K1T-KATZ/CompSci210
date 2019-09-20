#include "lab12.h"


int main() {
    int number;
    printf("Enter an integer\n");
    scanf("%d", &number);
    if (isArmstrong(number) == 1) {
        printf("%d is an Armstrong number.\n", number);
    }
    else {
        printf("%d is not an armstrong number.\n", number);
    }

    int num1;
    int num2;
    printf("Enter two integers.\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("the greatest common denom of %d and %d is %d\n", num1, num2, findGCD(num1, num2));

    int numA;
    int numB;
    printf("Enter two integers.\n");
    scanf("%d", &numA);
    scanf("%d", &numB);
    printRange(numA, numB);

    return 0;
}

int isArmstrong(int number) {
    int length;
    int numLength = number;
    int numDigit = number;
    int digit;
    double armstrongTest = 0;
    length = 0;
    while (numLength != 0) {
        numLength = numLength / 10;
        length = length + 1;
        //printf("working length = %d\n", length);
    }
    while (numDigit > 0) {
        digit = numDigit % 10;
        //printf("%d\n", length);
        armstrongTest = armstrongTest + pow(digit, length);
        //printf("working armstrong test is %lf\n", armstrongTest);
        numDigit = numDigit / 10;
    }
    //printf("final armstrong test is %lf\n", armstrongTest);
    //printf("your original number is reporting as %d, should be 1364\n", number);
    if (armstrongTest == number)
        return 1;
    else
        return 0;
}

int findGCD(int num1, int num2) {
    while (num1 != num2) {
        if (num2 > num1)
            num2 = num2 - num1;
        else
            num1 = num1 - num2;
    }
}

void printRange(int numA, int numB) {
    while (numB >= numA) {
        printf("%d\n", numA);
        numA = numA + 1;
    }
}



    /* int gcdTest = 0;
    int gcd;
    while (gcdTest <= (num1 / 2)) {
        if ((num1 % gcdTest) == 0) {
            //while (gcdTest >= num2 / 2) {
                if ((num2 % gcdTest) == 0) {
                    gcd = gcdTest;
                }
                else {
                    //printf("First, not second...");
                }
            }
        else {
            //printf("neither...");
        }
        gcdTest = gcdTest + 1;
        }
        return gcd; */