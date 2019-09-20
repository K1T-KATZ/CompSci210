/** lab09.c
* ===========================================================
* Name: Katz, 03 SEP 2019
* Section: T1/2b
* Project: Lab 09
* Purpose: Adding Unit Tests
* ===========================================================
*/
/**   ----------------------------------------------------------
* <high level description of purpose of the function
* including what the parameters are used for>
* @param <explanation of each of the function parameters>
* @return <explanation of what the function returns>
*/
#include <assert.h>
#include <stdio.h>
#include "lab09functs.h"

int main() {
    printf("Testing started\n");
    assert(volumeCylinder(5, 2) >= 0);
    assert(volumeBox(2, 3, 4) >= 0);
    assert(degToRad(100) >= 0);
    printf("Testing complete\n");
    return 0;
}
