#include <stdio.h>

/*
Program to copy it's input to it's output, replacing
each string of one or more blank spaces by a single blank
*/

main()
{
    int c, bs;

    bs = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (bs == 0) {
                putchar(c);
                bs = 1;
            }
        }
        
        if (c != ' ') {
            if (bs > 0)
                bs = 0;
            putchar(c);
        }
    }
}