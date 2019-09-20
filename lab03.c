/** lab03.c
* ===========================================================
* Name: Christopher Katz / 15AUG19
* Section: T1-T2
* Project: Lab 3 - Variables, Data Types, and Strings
* Purpose: Learn C basics
* ===========================================================
* Instructions:
 * Complete the tasks outlined in the lab writeup.
*/
/* TODO 0.1 - Exercise 0 - Include Statements
   add the required include statement to use scanf and printf, and the required include statement to use math functions */

#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

   double x;
   double y;
   double distancePoints;
    /* TODO 1.1 - Exercise 1 - Distance Formula
      a. Prompt the user for the x and y values of two points
      b. Using the distance formula calculate the distance between these user-provided two points
      c. Output the calculated distance value*/
   
   scanf("enter the x value for the point");
   scanf("%lf", &x);
   scanf("enter the y value for the point");
   scanf("%lf", &y);
   
   distancePoints = sqrt((pow(x, 2)) + (pow(y, 2)));
   
   printf("%lf\n\n", distancePoints);
   
   
    /* TODO 2.1 - Exercise 2 - Data Types
      a. Prompt the user for two values and assign them to variables of type float
      Hint: Pay attention to the format specifier used in scanf
      b. Output the percent the first value is of the second value with two decimal places
      c. Output the percent the second value is of the first value with four decimal places */
    
   float a;
   float b;
   float percentFirst;
   float percentSecond;
   
   printf("Enter value for a\n");
   scanf("%f", &a);
   printf("Enter value for b\n");
   scanf("%f", &b);
   
   percentFirst = a * 100 / b;
   percentSecond = b * 100 / a;
   
   printf("%.2f\n", percentFirst);
   printf("%.4f\n\n", percentSecond);
      
    /* TODO 3.1 - Exercise 3 - sizeof()
      a. Prompt the user to input an integer
      b. In one statement, output the integer value and the size of this variable
      c. In one statement with the use of a type cast, output the user-provided value as a double and the size of this variable */
   
   int c;
   
   printf("Input an integer\n");
   scanf("%d", &c);
   
   printf("%d %lu\n", c, sizeof(c));
   printf("%lf %lu\n", (double)c, sizeof(c));
      
    /* TODO 3.2 - Exercise 3 - sizeof()
      a. Prompt the user to input a character
      b. In one statement, output the character and the size of this variable
      Hint: If your character is not printing, then try coding scanf to ignore whitespace */
 
   char d;
 
   printf("Input an integer\n");
   scanf(" %c", &d);
   
   printf("%c %lu\n\n", d, sizeof(d));
 
    /* TODO 4.1 - Exercise 4 - Strings
      a. Include string.h to use string functions
      b. Declare a character array of size 50
      c. Prompt the user for an input string no longer than 50 characters
      d. Using strncpy(), make a copy of 10 characters of the input string
      e. Output the copied string
      f. Using strcmp(), compare the two strings and output the value returned from the function
      g. Using strncmp(), compare the first 10 characters of the original and the copied string, then output the value returned from the function
      h. Using strlen() print out the length of the original input string */
      
   char characterArray[50];
   char characterCopy[11];
   int resault1;
   int resault2;
   
   printf("enter a string no longer than 50 charecters\n");
   scanf(" %s", characterArray);
   strncpy(characterCopy, characterArray, 10);
   printf("%s\n", characterCopy);
   
   resault1 = strcmp(characterArray, characterCopy);
   resault2 = strncmp(characterArray, characterCopy, 10);
   
   printf("%d", resault1);
   printf("%d", resault2);
   
   //printf("strcmp(characterArray, characterCopy) = %d\n", resault1);
   //printf("strncmp(characterArray, characterCopy, 10) = %d\n", resault2);
    return 0;
}