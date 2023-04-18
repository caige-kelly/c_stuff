/* Functions */

#include <stdio.h>

int power(int, int);

int main(void)
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    return 0;
}

int power(int base, int exponent)
{
    int power;

    for (power = 1; exponent > 0; --exponent)
        power = power * base;
    return power;
}