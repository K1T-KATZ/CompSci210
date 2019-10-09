/** lab20main.c
* ===========================================================
* Name: Katz, Christopher 10/06/19
* Section: T1
* Project: Lab 20
* Purpose: File I/O
* Documentation: none
* ===========================================================
*/

#include <stdio.h>

int main() {
    double min;
    double max;
    double step;
    //double deg;
    printf("Minimum Farenheit temperature: \n What step size: ");
    fscanf(stdin, "%lf", &min);
    printf("Maximum Farenheit temperature: \n");
    fscanf(stdin, "%lf", &max);
    printf("What step size: \n\n");
    fscanf(stdin, "%lf", &step);

    fprintf(stdout, "\n\n|-----------------------------|\n"
                    "|                             |\n"
                    "|   Temperature Conversions   |\n"
                    "|                             |\n"
                    "|-----------------------------|\n"
                    "|Farenheit| Celsius | Kelvin  |\n"
                    "|-----------------------------|\n");
    fprintf(stdout, "|   -40.00|   -40.00|  -313.15|", input, cel, kel)\n"
           "|   -36.00|   -37.78|  -310.93|\n"
           "|   -32.00|   -35.56|  -308.71|\n"
           "|   -28.00|   -33.33|  -306.48|\n"
           "|   -24.00|   -31.11|  -304.26|\n"
           "|   -20.00|   -28.89|  -302.04|\n"
           "|   -16.00|   -26.67|  -299.82|\n"
           "|   -12.00|   -24.44|  -297.59|\n"
           "|    -8.00|   -22.22|  -295.37|\n"
           "|    -4.00|   -20.00|  -293.15|\n"
           "|     0.00|   -17.78|  -290.93|\n"
           "|-----------------------------|");      **/
    return 0;
}