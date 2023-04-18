/*
    Rewrite the temperature conversion program of Section 1.2
    to use a function for conversion.
*/

#include <stdio.h>

int fahr_to_celsius(int);
int celsius_to_fahr(int);

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahrenheit to celsius conversion table\n");
    fahr = lower;
    while (fahr <= upper) {
        celsius = fahr_to_celsius(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }
    
    printf("\ncelsius to fahrenheit conversion table\n");
    celsius = lower;
    while (celsius <= upper) {
        fahr = celcius_to_fahr(celsius);
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
}

int fahr_to_celsius(int fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}

int celsius_to_fahr(int celsius)
{
    return (9.0 / 5.0 * celsius) + 32.0;
}