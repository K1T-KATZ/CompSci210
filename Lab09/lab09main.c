/** labXX.c
* ===========================================================
* Name: Katz, 03 SEP 2019
* Section: T1/2b
* Project: Lab 09
* Purpose: use multiple files
* ===========================================================
*/

/**   ----------------------------------------------------------
* This is the main function that calls lab09functs.c and lab09functs.h
*/
#include <stdio.h>
#include "lab09functs.h"


int main() {
    double result;
    double radius;
    double height;
    printf("Enter cylinder radius followed by height:");
    scanf("%lf", &radius);
    scanf("%lf", &height);
    result = volumeCylinder(radius, height);
    printf("The volume is %.6lf \n", result);
    double widthBox;
    double heightBox;
    double depthBox;
    double volumeB;
    printf("Enter box width followed by height followed by depth:");
    scanf("%lf", &widthBox);
    scanf("%lf", &heightBox);
    scanf("%lf", &depthBox);
    volumeB = volumeBox(widthBox, heightBox, depthBox);
    printf("The volume is %.6lf radians", volumeB);
    double rad;
    int deg;
    printf("Enter degrees:");
    scanf("%d", &deg);
    rad = degToRad(deg);
    printf("%d degrees is %.6lf radians.", deg, rad);
    return 0;
}
