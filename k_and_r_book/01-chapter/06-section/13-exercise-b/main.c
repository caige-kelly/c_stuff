/*
Write a program to print a histogram of the lengths
of words in its input. Output should be vertical.
*/

#include <stdio.h>

void main()
{
    int c, i;
    int nlength[10];
    int max_len;
    max_len = i = 0;
 
    for (int index = 10; index > 0; --index)
        nlength[index] = 0;

    while ((c = getchar()) != EOF) {
        if ((c >= '0' && c <= '9') || c == ' ' || c == '\n' || c == '\t' || c == '.' || c == ',' ) 
            if (i == 0)
                continue;
            else {
                if (i > 9)
                    i = 10;
                ++nlength[i];
                if (nlength[i] > max_len)
                    max_len = nlength[i];
                i = 0;
            }
        else
            ++i; 
    }

    printf("     Tally of words by length:\n");

    for (max_len; max_len > 0; --max_len) {
        for (int j = 1; j < 11; ++j) {
            if (nlength[j] != max_len) 
                printf("%3s", "");
            else {
                --nlength[j];
                printf("%3s", "*");
            }
        }
        printf("\n");
    }

    printf("%3d%3d%3d%3d%3d%3d%3d%3d%3d%4s\n", 
            1, 2, 3, 4, 5, 6, 7, 8, 9, "10+");
}