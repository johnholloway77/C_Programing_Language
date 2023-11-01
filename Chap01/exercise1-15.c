/*
 * Exercise 1-15 Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
 *
 */

#include <stdio.h>

int celsius(int f);

int main(){
  int fehr, lower, upper, step;
  
  fehr = lower = 0;
  upper = 300;
  step = 20;

  while(fehr <= upper){
    printf("%5d%5d\n", fehr, celsius(fehr));
    fehr += step;
  }
  printf("\n");

  return 0;
}

int celsius(int fValue){
  return 5 * (fValue - 32) / 9;
}
