/** lab04.c
* ===========================================================
* Name: Christopher Katz, 19 Aug 19
* Section: T1-T2
* Project: Lab 4 - User-defined Functions
* Purpose: Learn function prototypes, user-defined functions,
*          return values, and parameters.
* ===========================================================
* Instructions:
 * Complete the tasks outlined in the lab writeup.
*/

// TODO 1.0 - Exercise 1 - Find Largest
#include <math.h>
#include <stdio.h>

// TODO 3.0 - Exercise 3 - Degress to Radians
// TODO 4.0 - Exercise 4 - Boolean
// TODO 1.1 - Exercise 1 - Find Largest
int findLargest(int a, int b, int c);

// TODO 2.1 - Exercise 2 - Temperature Conversion
double convertTemperature(double freedom);

// TODO 3.1 - Exercise 3 - Degress to Radians
// TODO 4.1 - Exercise 4 - Boolean

int main() {
   // TODO 1.3 - Exercise 1 - Find Largest
   int a;
   int b;
   int c;
   
   printf("Insert 3 integers\n");
   scanf(" %d\n", &a);
   scanf(" %d\n", &b);
   scanf(" %d\n", &c);
   
   printf("The largest integer is %d\n\n", findLargest(a, b, c));
   // TODO 2.3 - Exercise 2 - Temperature Conversion
   double freedom;
   
   printf("Insert the temperature Fahrenheit.\n");
   scanf("%lf", &freedom);
   printf("The temperature in celsius is %lf\n\n", convertTemperature(freedom));
   // TODO 3.3 - Exercise 3 - Degress to Radians
   
   // TODO 4.3 - Exercise 4 - Boolean
   return 0;  
}

// TODO 1.2 - Exercise 1 - Find Largest
int findLargest(int a, int b, int c) {
   int largest;
   if (a > b && a > c) {
      largest = a;
}
   else if (b > a && b > c) {
      largest = b;
}
   else {
      largest = c;
}
   return largest;   
}

// TODO 2.2 - Exercise 2 - Temperature Conversion
double convertTemperature(double freedom) {
   double celsius;
   celsius = (freedom - 32) * 5/9;
   return celsius;
}

// TODO 3.2 - Exercise 3 - Degress to Radians

// TODO 4.2 - Exercise 4 - Boolean