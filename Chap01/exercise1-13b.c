/*
 * Exercise 1-13 Wire  program to print a histogram of the lengths of words in its input. It is easy to draw the historgram with bars horizontal, a vertifical orientation is more challenging.
 *
 
 */


#include <stdio.h>

int main()
{
  int c, length, maxLength;
  int wordLength[20];

  maxLength = length = 0;
  


  //set all indexes in the array to 0
  for (int i = 0; i < 20; i++){
      wordLength[i] = 0;

  }


  printf("Enter a line of text. Press ctrl+d to end the submission\n");

  while((c = getchar()) != EOF){

    if(c != ' '){
        length++;
      }

    
    if(c == ' ' || c == EOF || c == '\n'){
        wordLength[length]++;
        
        length = 0;
      }
    }
      
    printf("\nThanks for the input!\n");

    printf("\nHorizontal histogram:\n");
    for(int i = 0; i < 20; i++){
     printf("\n%d: ", i);
     int count = wordLength[i];

     while(count > 0){
       putchar('*');
       count--;
      }  

      if(maxLength < wordLength[i]){
        maxLength = wordLength[i];
      }

    }

    printf("\n");


   printf("\nVertical histogram:\n");

   char charArray[20][20];


    for (int i = 0; i <20; i++){
     for (int j = 0; j < 20; j++){
      charArray[i][j] = ' ';
      }
    }


    for(int j = 0; j < 20; j++){
      int count = wordLength[j];
      while(count > 0){
        charArray[19 - count][j] = '*';
        count--;
       }  
    }

   for (int i = 0; i < 20; i++){
    for (int j = 0; j < 20; j++){
      putchar(charArray[i][j]);
    }
    
    if(i < 18){
      printf("\n");
    }
   }
  
   printf("\n");  
   for (int i = 0; i <20 ; i++){
    printf("%d", i);
  
   }
    

    

    printf("\n");

    return 0;
}
