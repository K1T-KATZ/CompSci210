//
// Created by C22Christopher.Katz on 9/3/2019.
//
/** labXX.c
* ===========================================================
* Name: Katz, 03 SEP 2019
* Section: T1/2b
* Project: Lab 09
* Purpose: use multiple files
* ===========================================================
*/

/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
#include <math.h>
#include "lab09functs.h"

double volumeCylinder(double radius, double height) {
    double volume;
    volume = M_PI * radius * radius * height;
    return volume;
}
double degToRad(int deg) {
    double rad;
    rad = deg * (M_PI / 180);
    return rad;
}
double volumeBox(double widthBox, double heightBox, double depthBox) {
    double volumeB;
    volumeB = widthBox * heightBox * depthBox;
    return volumeB;
}