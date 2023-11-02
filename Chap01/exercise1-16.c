/*
 * Exercise 1-16 Revise the main routeine of the longest-line program so that it will correctly print the length of arbitrary long input lines as much as possible.
 */

#include <stdio.h>
#define MAXLINE 1000 // Max input line length
                     //
int getline2(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, char *argv[])
{

  int len;  //current line length
  int max;  //max length seen so far
  char line[MAXLINE]; //current input line
  char longest[MAXLINE]; //longest line saved here

  max = 0;
  while((len = getline2(line, MAXLINE)) > 0){
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }
  if(max > 0){ //there was a line
    printf("%s", longest);
  }


  return 0;
}

int getline2(char s[], int lim)
{
  int c, i;

  for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i){
    s[i] = c;
  }
  if (c == '\n'){
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[])
{
  int i;

  i = 0;
  while((to[i] = from[i]) != '\0'){
    ++i;
  }
}
