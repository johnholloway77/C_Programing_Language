/*
 *  Exercise 1-11: How would you test the word count program? What kinds of inputs are most likely to uncover any bugs?
 *
 *
 *
 * */

//Wowzers, VIM has a shortcut for inputs!
#include <assert.h>
#include <errno.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define IN 1 //Inside a word
#define OUT 0 //outside a word

//count lines, words, and characters in input.

int main(void)
{
  int c, nl, nw, nc, state;
  nl = nw = nc = 0;
  state = OUT;

  printf("\nEnter a new line of text. Use ctrl+d to end the input.\n");

  while((c = getchar()) != EOF) {

    ++nc;
    if (c == '\n') {
      ++nl;
    }
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if (state == OUT) {
        state = IN;
        ++nw;
    }



  }
    printf("\nThere are %d new lines, %d new words, and %d new characters\n", nl, nw,nc);

  return EXIT_SUCCESS; //modern way of returning without using 0
}
