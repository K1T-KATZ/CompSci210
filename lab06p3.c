/** lab06p3.c
* ===========================================================
* Name: Name, Date
* Section:
* Project: Lab 6 - Logical Operators and Precedence
* Purpose:
* ===========================================================
* Instructions:
 * Complete the tasks outlined in the lab writeup.
*/

/***
 *  Function prototypes
 */
// TODO 3.2 - Exercise 3 - Pythagorean Theorem
#include <stdio.h>
#include <math.h>

double pythagorean(int a, int b);

int main() {
	int a;
	int b;
	double c;
    // TODO 3.3 - Exercise 3 - Pythagorean Theorem
	printf("Enter lengths of sides a and b:\n");
	scanf("%d ", &a);
	scanf("%d\n", &b);
	c = pythagorean(a, b);
	printf("The length of the hypotenuse is %lf.\n", c);

    return 0;
}

// TODO 3.1 - Exercise 3 - Pythagorean Theorem
double pythagorean(int a, int b) {
	double c;
	c = sqrt(pow(a, 2) + pow(b, 2));
	return c;
}