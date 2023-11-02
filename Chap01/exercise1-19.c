/*
 * Write a function reverse(s) which reverses the character string s. Use it to write a program that revers its input a line at a time.
 *
 */

#include <stdio.h>
#define MAXLINE 1000 //max input line length

void reverseString(char s[]);

int main()
{
  char c; 
  char line[MAXLINE];
  int i = 0;
  int x = 1;

  printf("Enter text to have it reverse! Press ctrl+d to end\n");

  while ((c = getchar()) != EOF){
    
    while(x > 0){
      printf("\n");
      x--;
    }

    if(c != '\n'){
      line[i] = c;
      i++;
    }
    if(c == '\n' || c == EOF){
      line[i] = '\0';
      reverseString(line);
     
      for(int j = 0; j < i; j++){
          printf("%c", line[j]);
      }
      printf("\n");
      i = 0;
    }

  }

return 0;
}

//try to reverse the string without creating a new array!
void reverseString(char s[])
{
  char temp;
  int c,j;
  c = j = 0;

  while (s[j] != '\0'){
    ++j;
  }

  j--;

  while(c <= j){
  temp = s[c];
  s[c] = s[j];
  s[j] = temp;
  ++c;
  --j;
  }
  
}
