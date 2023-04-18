#include <stdio.h>

/* count lines, words, and characters in input */
/* Write a program that prints its input one word per line*/
void main()
{
    int c, state;

    state = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == 1) {
                state = 0;
                printf("\n");
            }
        }
        else {
            state = 1;
            putchar(c);
        }
    }
}