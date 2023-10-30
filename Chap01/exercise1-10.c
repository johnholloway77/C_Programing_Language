/*
 *  Exercise 1-10 Write a program to copy its input to it's output, but replace each
 *  tab with \t, each backspace with \b and each backslash with \\.
 *
 *
 */
 
#include <stdio.h>

int main(void)
{
  short i = 1;
  char c;
  printf("Enter text. On FreeBSD use ctrl+d to mark the end of the submission.\n");

  while((c=getchar()) != EOF){
    
    if(i == 1){
      printf("\n");
      i--;
    }

    if(c == '\t'){
      printf("\\t");
    }
    else if(c == '\b'){
      printf("\\b");
    }      
    else if(c == '\\'){
      printf("\\\\");
    }else {
      putchar(c);
    }
  }

  printf("\n");
  return 0;
}
