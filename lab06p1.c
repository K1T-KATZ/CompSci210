/** lab06p1.c
* ===========================================================
* Name: Christopher Katz, 22 AUG 19
* Section: T1/2B
* Project: Lab 6 - Logical Operators and Precedence
* Purpose:
* ===========================================================
* Instructions:
 * Complete the tasks outlined in the lab writeup.
*/
#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
char strn1[10];
char strn2[11];
int comp;
char strnOil[] = "Oil";
char strnTire[] = "Tire";
char strnCar[] = "Car";

    // TODO 1 - Exercise 1 - Automobile Service Cost
	printf("Enter desired auto service:\n");
	scanf("%s %s", strn1, strn2);
	comp = strcmp(strnOil, strn1);
	if (comp == 0) {
		printf("You entered: Oil change\n");
		printf("Cost of oil change: $35\n");
	}
	else {
		comp = strcmp(strnTire, strn1);
		if (comp == 0) {
			printf("You entered: Tire rotation\n");
			printf("Cost of tire rotation: $19\n");
		}
		else {
			comp = strcmp(strnCar, strn1);
			if (comp == 0) {
				printf("You entered: Car wash\n");
				printf("Cost of car wash: $7\n");
			}
			else {
				printf("You entered: Engine replacement\n");
				printf("Error: Requested service is not recognized\n");
			}
		}
	}
    return 0;
}