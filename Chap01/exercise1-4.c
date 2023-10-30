/*
 *Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table
*/

#include <stdio.h>

int main()
{
	float celsius, fehr;
	float lower = -20;
	float upper = 150;
	float step = 10;

	celsius = lower;

	printf("%10s %10s\n", "Celsius", "Fehrenheit");
	while(celsius <= upper){
		fehr = (celsius * 9.0/50) + 32;
		printf("%10.0f%10.2F\n", celsius, fehr);
		celsius += step;
	}

	return 0;
}
