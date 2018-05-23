/*
    Print Celsius - Fahrenhite table for celsius = 0,20, ... ,300.
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

    celsius = lower;
    printf("Celsius Fahrenhite\n\n");   /* Table names */

    /* Will print temperature until the condition is true (fahr less than or equal to 300) */
    while(celsius <= upper){
        fahr = ((9.0 / 5.0) * celsius) + 32;
        printf("%7.0f %10.2f\n",celsius,fahr);
        celsius += 20;
    }
}
