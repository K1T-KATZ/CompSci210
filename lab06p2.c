/** lab06p2.c
* ===========================================================
* Name: Name, Date
* Section:
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
	char aServ1[20];
	char aServ2[20];
	char bServ1[20];
	char bServ2[20];
	int comp;
	char strnOil[] = "Oil";
	char strnTire[] = "Tire";
	char strnCarSh[] = "wash";
	char strnCarX[] = "wax";
	int total;
	int cost1;
	int cost2;
	char null[5] = "-";
	
	printf("Davy's auto shop services\nOil change -- $35\nTire rotation -- $19\nCar wash -- $7\nCar wax -- $12\n\n");
	printf("Select first service:\n");
	scanf("%s", aServ1);

	if (strcmp(aServ1, null) == 0) {
		strcpy(aServ2, "-");
	}
	else {
		scanf("%s", aServ2);
	}
	
	printf("Select second service:\n\n");
	scanf("%s %s", bServ1, bServ2);
	
	printf("Davy's auto shop invoice\n\n");
	
	comp = strcmp(strnOil, aServ1);
	if (comp == 0) {
		printf("Service 1: Oil change, $35\n");
		cost1 = 35;
	}
	else {
		comp = strcmp(strnTire, aServ1);
		if (comp == 0) {
			printf("Service 1: Tire rotation, $19\n");
			cost1 = 19;
		}
		else {
			comp = strcmp(strnCarSh, aServ2);
			if (comp == 0) {
				printf("Service 1: Car wash, $7\n");
				cost1 = 7;
			}
			else {
				comp = strcmp(strnCarX, aServ2);
				if (comp == 0) {
					printf("Service 1: Car wax, $12\n");
					cost1 = 12;
				}
				else {
					printf("Service 1: No service\n");
					cost1 = 0;
				}
			}
		}
	}
	
	comp = strcmp(strnOil, bServ1);
	if (comp == 0) {
		printf("Service 2: Oil change, $35\n\n");
		cost2 = 35;
	}
	else {
		comp = strcmp(strnTire, bServ1);
		if (comp == 0) {
			printf("Service 2: Tire rotation, $19\n\n");
			cost2 = 19;
		}
		else {
			comp = strcmp(strnCarSh, bServ2);
			if (comp == 0) {
				printf("Service 2: Car wash, $7\n\n");
				cost2 = 7;
			}
			else {
				comp = strcmp(strnCarX, bServ2);
				if (comp == 0) {
					printf("Service 2: Car wax, $12\n\n");
					cost2 = 12;
				}
				else {
					printf("Service 2: No service\n\n");
					cost2 = 0;
				}
			}
		}
	}
	
	total = (cost1 + cost2);
	printf("Total: $%d\n", total);
    // TODO 2 - Exercise 2 - Automobile Service Invoice

    return 0;
}