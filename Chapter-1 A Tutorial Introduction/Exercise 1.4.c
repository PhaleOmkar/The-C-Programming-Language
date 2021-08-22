/* Exercise 1-4. Write a program to print the corresponding Celcius to Fahrenheit table */

#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;   // lower limit of temperature scale
    upper = 300; // upper limit
    step = 20;   // step size

    fahr = celsius = lower;

    printf("##############################################\n");
    printf("## Title : Celsius to Fahrenheit Conversion ##\n");
    printf("##############################################\n");

    printf("\tCelsius\t\tFahrenheit\n");
    while (celsius <= upper)
    {
        fahr = celsius * 9 / 5 + 32;
        printf("\t%4.0f\t%15.1f\n", celsius, fahr);
        fahr = fahr + step;
        celsius = celsius + step;
    }

    printf("##############################################\n");

    return 0;
}
