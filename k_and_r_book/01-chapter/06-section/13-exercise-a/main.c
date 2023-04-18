#include <stdio.h>
/*
Write a program to print a histogram of the lengths
of words in its input
*/
void main()
{
    int c, i;
    int nlength[10];
 
    for (i=1; i<11; ++i)
        nlength[i] = 0;
    
    i = 0;
    while ((c = getchar()) != EOF) {
        if ((c >= '0' && c <= '9') || c == ' ' || c == '\n' || c == '\t' || c == '.' || c == ',' )
            if (i == 0)
                continue;
            else {
                if (i > 9)
                    i = 10;
                ++nlength[i];
                i = 0;
            }
        else { 
            ++i;
        }          
    }

    printf(" Tally of words by length:\n");

    for (i=1; i<11; ++i) {
        printf("%2d: ",i);
        for (int j = 0; j < nlength[i]; ++j) {
            printf("*");
        }
        printf("\n");
    }
}