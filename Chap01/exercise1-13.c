/*
 * Exercise 1-13 Wire  program to print a histogram of the lengths of words in its input. It is easy to draw the historgram with bars horizontal, a vertifical orientation is more challenging.
 *
 *
 */


#include <stdio.h>

main()
{
  int c, length;
  int wordLength[20];
  length = 0;


  //set all indexes in the array to 0
  for (int i = 0; i < 20; i++){
    wordLength[i] = 0;
  }

  printf("Enter a line of text. Press ctrl+d to end the submission\n");

  while((c = getchar()) != EOF){

    if(c != ' '){
        length++;
      }

    
    if(c == ' ' || c == EOF){
        wordLength[length]++;
        
        length = 0;
      }
    }

    for(int i = 0; i < 20; i++){
     printf("\n%d: ", i);
     int count = wordLength[i];
     while(count > 0){
       putchar('*');
       count--;
      }  

    }

    printf("\n");

    return 0;
}
