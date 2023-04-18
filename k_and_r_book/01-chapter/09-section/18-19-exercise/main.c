/*
 Write a program to remove trailing blanks and tabs from each line of input,
 and to delete entirely blank lines
*/

#include <stdio.h>

#define MAXLINE 1000
#define EMPTY_LINE 1
#define NONE_EMPTY_LINE 0

int get_line(char line[], int maxline);
int remove_trailing_spaces(char[]);
void reverse(char[], char[]);

int main(void)
{
  int empty_line;
  char line[MAXLINE];
  char reversed_line[MAXLINE];

  while((get_line(line, MAXLINE))>0) { 
    empty_line = remove_trailing_spaces(line);

    if (empty_line)
      ;
    else {
      reverse(reversed_line, line);
      printf("%s", reversed_line);
    }
  }
  return 0; 
}

int get_line(char s[], int lim)
{
  int c,i;

  for (i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

int remove_trailing_spaces(char current_line[]) {

  int c,j,i;

  for (i=0; current_line[i] != '\0'; ++i);
    ; 

  if (i < 2)
    return EMPTY_LINE;

  for (j = i-2; (c = current_line[j]) == ' ' || c == '\t'; --j)
    ;

  current_line[j+1] = '\n';
  current_line[j+2] = '\0';

  return NONE_EMPTY_LINE;
}

void reverse(char reversed_line[], char line[])
{
  int i,j = 0;
  for (i=0; line[i] != '\n'; ++i)
    ;
  reversed_line[i+1] = '\0';
  reversed_line[i] = '\n';
  while ((reversed_line[i-1] = line[j]) != '\n') {
    --i;
    ++j;
  }
}
