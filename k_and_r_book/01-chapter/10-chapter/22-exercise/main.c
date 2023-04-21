/*
    Write a program to "fold" long input lines into two or more shorter lines
    after the last non-blank character that occues before the n-th column of
    input. Make sure your program does something intelligent with very long
    lines, and if there are no blanks or tabs before the specified column.
*/

#include <stdio.h>

#define COLUMN 82

c_fold_line(char[]);
d_trailing_spaces();

int main(void)
{
    int c, i, j;
    char line[COLUMN];
    
    while (c_fold_line() > 0) {

    }

}

c_fold_line(line){
    int i, c;
    for(i=0; (c=getchar()) != EOF && i < 80; ++i) { 
        line[i] = c;     
    }
    line[i] = '\n';
    printf("%s", line);
}

d_trailing_spaces(){

}
