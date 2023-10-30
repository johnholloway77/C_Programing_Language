/*
 * Exercise 1-12
 * Write a program that returns its input one word per line
 *
 *
 * */

#include <stdio.h>

int main(){
  
  printf("\nEnter text. Press ctrl+d to finish your input\n");
  char c;
  short i = 1;

  while((c = getchar()) != EOF){
    if(i == 1){
      printf("\n");
      i = -1;
    }

    if(c == ' ' || c == '\n' || c == '\t'){
      putchar('\n');
    }
    else {
      putchar(c);
    }

  }

  printf("\n");

  return 0;
}
