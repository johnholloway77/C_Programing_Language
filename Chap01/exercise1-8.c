/*
 * Exercise 1-8 Write a program to count blanks, tabs and newlines
 *
 *
 */

#include <stdio.h>

int main(){
	int c, nl, b, t;
	nl = b = t = 0;
	
	printf("Enter a line of text. On FreeBSD terminate line with ctrl+d\n");	
	while((c = getchar()) != EOF){
		if (c== '\t'){
			t++;
		}

		if (c == ' '){
			b++;
		}

		if (c == '\n'){
			nl++;
		}
	}

	printf("\nThere are %d tabs, %d blank spaces, and %d new lines\n", t, b, nl);

	return 0;
}
