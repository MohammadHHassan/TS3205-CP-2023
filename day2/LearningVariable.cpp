// day2
// LearningVariable

#include <stdio.h>			// Header file for printf

int main(void)				// Main function
{
	int a, b, c;			// Declare variable called a as integer
	
	a = 150;					// Store 10 inside a
	b = 255;					// Store 50 inside b
	c = a+b;
	
	printf("a = %d", a);	// Print out the value of a
	printf("\nb = %d", b);	// Print out the value of b
	printf("\nc = %d+%d = %d", a, b, c);	// Print out the value of c
	
	return 0;
}
