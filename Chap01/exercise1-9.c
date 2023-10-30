/*
 * Exercise 1-9 Write a program to copy its input to its output, replace each string of one or more blanks with a single blank
 *
 */

#include <stdio.h>

int main(void)
{

	char c;
	int spaceCount = 0;

	printf("Enter text. On Freebsd use ctrl+d to mark the end of submission\n");

	while((c = getchar()) != EOF){
			
		if (c != ' '){
			spaceCount = 0;
		//	printf("%s",c);
		}

		if (c == ' '){
			spaceCount++;
		}
			
		if (spaceCount <= 1){
			putchar(c);
		}
	}
	
	printf("\n");

	return 0;

}	
