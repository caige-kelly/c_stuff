/*
Write a program to print all input lines that longer than 80 characters.

hint: arrays are not deep copies when passed to a function. they are just pointers to index 0.

fun fact. say the longest line is 100 and next longest is 90. chars 91-100 will still exist in the array
They just won't print cause of \0 in the shorter lines. 
*/

#include <stdio.h>
#define MAXLINE 1000

int get_line(char[], int);
void copy(char[], char[]);

int main(void)
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0)
        if (len > 80) 
            printf("%s", line); 
    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
