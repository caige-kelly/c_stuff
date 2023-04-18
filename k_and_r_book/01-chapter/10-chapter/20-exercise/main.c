/*
   write a program detab that replaces tabs in the input with the proper number
   of blanks to space to the next tab stop. Assume a fixed set of tab stops,
   say every n columns. Should n be a variable or a symbolic parameter?
*/

#include <stdio.h>

#define TABSTOP 8

int main(void)
{
        int i,c;

        i = 0;
        while ((c=getchar()) != EOF){
                if (c == '\t'){
                        if (i%8==0)
                                for (int j=0; j != 8;++j) {
                                        putchar(' ');
                                        ++i;
                                }
                        for (; (TABSTOP-(i%TABSTOP) !=8); ++i)
                                printf("%c", ' ');
                }
                else if (c== '\n') {
                  putchar('\n');
                  i=0;
                }
                else {
                        putchar(c);
                        ++i;
                }
        }

        return 0;
}
