#include <stdio.h>

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
        celsius = (5.0 / 9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }
    
    printf("\ncelsius to fahrenheit conversion table\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0 / 5.0 * celsius) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
    
}