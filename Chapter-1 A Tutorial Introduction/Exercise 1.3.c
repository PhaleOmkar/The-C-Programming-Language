/* Exercise 1-3. Modify the temperature conversion program to print a heading above the table */

#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;   // lower limit of temperature scale
    upper = 300; // upper limit
    step = 20;   // step size

    fahr = lower;

    printf("\n##############################################\n");
    printf("## Title : Fahrenheit to Celsius Conversion ##\n");
    printf("##############################################\n");

    printf("\tFahrenheit\tCelsius\n");
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("\t%5.0f\t%13.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    printf("##############################################\n");

    return 0;
}
