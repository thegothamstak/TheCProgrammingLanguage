/*
    Print Fahrenhite - Celsius table for fahr = 0,20, ... ,300.
    Also print table names to using augmented display.

    Author : Shripad Tak
    Date : 19th May 2018
*/
#include <stdio.h>

/* Main function */
int main(){

    int upper, lower;       /* Integer declaration of upper and lower limits */
    float fahr, celsius;    /* Floating point declarations of fahrennhite and celsius */

    /* Initiating values */
    lower = 0;
    upper = 300;

    fahr = lower;
    printf("Fahrenhite Celsius\n\n");   /* Table names */

    /* Will print temperature until the condition is true (fahr less than or equal to 300) */
    while(fahr <= upper){
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%10.0f %7.2f\n",fahr,celsius);
        fahr += 20;
    }
}
