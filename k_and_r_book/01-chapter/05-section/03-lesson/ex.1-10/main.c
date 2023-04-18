#include <stdio.h>

/* copy program's input to ouput, 
    replace each tab by with \t
    replace each backspace with \b ^H on ubuntu no reason to mess with stty
    replace each blackslash with \\
*/

int main()
{
    int c;
    while ((c=getchar())!=EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
            continue;
        }
        if (c == '\b') {
            putchar('\\');
            putchar('b');
            continue;
        }
        if (c == '\\') {
            putchar('\\');
            putchar('\\');
            continue;
        }
        else
        putchar(c);
    }
    
    return 0;
}