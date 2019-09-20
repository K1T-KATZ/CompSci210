/** PEX0.c
* ==============================================================
* Name: Christopher Katz, 23 Aug 19
* Section: T1/2B
* Project: PEX 0 - ASCII Art
* Purpose: Understand how to use C standard library functions, 
*          and user-defined functions.
* Documentation Statement: 
* ==============================================================
* Instructions:
 * Complete and submit PEX0 as outlined in the writeup.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/* ----------------------------------------------------------------------------------------------------
 These four lines call the functions that I will be using later so that main can be close to the top
 ----------------------------------------------------------------------------------------------------*/

void drawFlower();
void drawDog();
void drawArrow();
double triangleArea(double base, double vertical, double hypotenuse);

	
int main() {

/* ----------------------------------------------------------------------------------------------------
 This section of main takes user inputs and outputs drawings based on what drawing the user chooses.
 ----------------------------------------------------------------------------------------------------*/
	int drawChoice;
	printf("Input 1 if you want to draw a flower, 2 if you want a dog, and 3 if you want an arrow.");
	scanf("%d", &drawChoice);
    if (drawChoice == 1) {
		drawFlower();
	}
	if (drawChoice == 2) {
		drawDog();
	}
	if (drawChoice == 3) {
		drawArrow();
	}
	
/* ----------------------------------------------------------------------------------------------------
 This section takes inputs for the base, side, and hypotenuse of a triangle and outputs the area.
 ----------------------------------------------------------------------------------------------------*/	
	int base;
	int vertical;
	int hypotenuse;
	double area;
	
	printf("input the base of the triangle:\n");
	scanf("%d", &base);
	printf("input the base of the triangle:\n");
	scanf("%d\n", &vertical);
	printf("input the base of the triangle:\n");
	scanf("%d", &hypotenuse);
	if (hypotenuse == (sqrt(pow(base, 2) + pow(vertical, 2)))) { //this section runs the Pythagorean theorem to determine if I have inputs for a right triangle. 
		area = triangleArea(base, vertical, hypotenuse);
		printf("The area of a right triangle with a base side of %d inches, a height of %d inches, and a hypotenuse of %d inches is %0.2lf square inches.", base, vertical, hypotenuse, area);
	}
	else {
		printf("Your inputs do not describe a right triangle!");
	}

	return 0;
}

//this section draws the flower:
void drawFlower() {
	printf("    _ _\n");
	printf("   (_\\_)\n");
	printf("  (__<_{}\n");
	printf("   (_/_)\n");
	printf("  |\\ |\n");
	printf("   \\\\| /|\n");
	printf("    \\|//\n");
	printf("     |/\n");
	printf(",.,.,|.,.,.\n");
	printf("^`^`^`^`^`^ \n");
}

//this section draws the dog:
void drawDog() {
	printf("^..^      /\n");
	printf("/_/\\_____/\n");
	printf("   /\\   /\\\n");
	printf("  /  \\ /  \\\n");
}

//this section draws the arrow:
void drawArrow() {
	printf("**\n");
	printf("**\n");
	printf("**\n");
	printf("**\n");
	printf("**\n");
	printf("****\n");
	printf("***\n");
	printf("**\n");
	printf("*\n");
}

/* ----------------------------------------------------------------------------------------------------
 This section calculates the area of the triangle based on the inputs from earlier. 
 ----------------------------------------------------------------------------------------------------*/	
double triangleArea(double base, double vertical, double hypotenuse) {
	double area;
	area = ((1.0/2.0) * base * vertical);
	return area;
}
	