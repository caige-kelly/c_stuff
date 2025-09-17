/*
   write a program detab that replaces tabs in the input with the proper number
   of blanks to space to the next tab stop. Assume a fixed set of tab stops,
   say every n columns. Should n be a variable or a symbolic parameter?

   think ['a', '\t', 'b', '\t']
*/

#include <stdio.h>

#define TABSTOP 4

int main(void)
{
        int i;
        char c; 

        i = 0;
        while ((c=getchar()) != EOF) {
                if (i == TABSTOP)
                    i = 0;

                if (c == '\t') {
                    while(i != TABSTOP) {
                        putchar(32);
                        ++i;
                    }
                }
                else if (c == '\n') {
                    putchar(10);
                    i=0;
                }
                else {
                    putchar(c);
                    ++i;
                }
        }
        return 0;
}
