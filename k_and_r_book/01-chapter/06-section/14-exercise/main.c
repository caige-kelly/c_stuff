/*
Write a program to print a histogram of the frequencies of different characters in its input.
*/

#include <stdio.h>

int c;
int frequency[128];
int i = 0;

void main()
{
    for(i = 0; i < 128; i++)
        frequency[i] = 0;

    while((c = getchar()) != EOF)
        frequency[c]++;

    for (i = 0; i < 128; i++) {
        if (frequency[i] > 0) {
            if (i == '\t')
                printf("tab: ");
            else if (i == '\n')
                printf("new line: ");
            else if (i == ' ')
                printf("space: ");
            else
                printf("%c: ", i);
            for (int j = 0; j < frequency[i]; j++)
                printf("*");
            printf("\n"); 
        }      
    }
}