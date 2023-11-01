/*
 *
 * Write a program to print a histogram of the frequencies of different characters in its input.
 *
 */

#include <stdio.h>
#include <ctype.h>

int toupper(int c);

int main(void)
{
 
  char c;
  int charCount[26];

  for (int i = 0; i < 26; i++){
    charCount[i] = 0;
  }

  printf("\nEnter a line of text. Press ctrl+d to end\n");
  
  while ((c = getchar()) != EOF){
    char ch = toupper(c);
    if(ch >= 65  && ch <= 90){
      charCount[ch - 65]++;
    }
  }

  printf("\nThanks for the input!\n");

  for (int i = 0; i < 26; i++){
    printf("%c: ", i + 65);
    int count = charCount[i];
    while(count > 0){
      putchar('*');
      count--;
    }
    printf("\n");
  }


  return 0;
}
