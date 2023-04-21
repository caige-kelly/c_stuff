/*
Write a program entab that replaces strings of blanks by the minimum number of tabs
and blanks to achieve the same spacing. Use the same tab stops as `detab`. When
either a tab or single space would suffice to reach a tab stop, which should be
given preference
*/

#include <stdio.h>

#define MAXLINE 1000
#define TABSTOP 8

int get_line(char[], int);
void replace_bs(char[]);

int main(void)
{
        int len;
	int max;
	char line[MAXLINE];

        while ((len  = get_line(line, MAXLINE)) > 0) {
		replace_bs(line);
        }
	printf("\n");
	return 0;
}

int get_line(char s[], int lim)
{
	int c, i;
	
	for (i = 0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
	
void replace_bs(char line[]) {
	int c, i, j, m;

	for (i=0; (c=line[i]) != '\n'; ++i){
		j=0;

		if (c == ' ') {
			for (j = i; line[j] == ' '; ++j)
				;
		}
		if (j - i > 7) {
			putchar('\t');
			i = i + 7;
		}
		else
			putchar(c);

	}	

	putchar('\n');
}

