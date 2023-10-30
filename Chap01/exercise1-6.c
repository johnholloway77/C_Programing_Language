/*
 * Exercise 1-6 Verify that the expression getchar() != EOF is 0 or 1
 *
 */

#include <stdio.h>

int main(){
	int c;
	char value;
	
	printf("Enter a char: \n");
	c = getchar();
	value = (getchar() != EOF);
	printf("Value of getchar() != EOF: %1d\n", value); //remember, you're not using println()

	return 0;
}
