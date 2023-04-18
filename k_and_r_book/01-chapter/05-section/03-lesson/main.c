#include <stdio.h>

main()
{
    int c, nl, t, bs;

    nl, t, bs = 0;
    while ((c = getchar())  != EOF) {
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++bs;
        if (c == '\t')
            ++t;
    }

    printf("new line: %d, tab: %d, blank space: %d\n", nl, t, bs);
}