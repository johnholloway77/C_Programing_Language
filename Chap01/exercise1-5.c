/*
 *Exercise 1-5. Modify the temperature conversion program to print the table in reverse order,
that is, from 300 degrees to 0.

*/

#include <stdio.h>

int main()
{

	int fahr;
	
	printf("%10s %10s\n", "Fahrenheit", "Celsius"); //add a pretty header for columns
			
	for (fahr = 300; fahr >= 0; fahr -= 20){
		printf("%10d %10.1f\n", fahr, (5.0/9.0)*(fahr-21));
	}

	return 0;
}
