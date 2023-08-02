// LearningScanf

#include <stdio.h>		// Library for input (scanf) and output (printf)

int main(void)			// Main function
{
	int a, b, c;		// Declare variable a, b and c as integer
	
	printf("Please enter the value of a: ");	// Prompt a message for user to enter value a
	scanf(" %d", &a);	// Store user's input in a
	
	printf("Please enter the value of b: ");	// Prompt a message for user to enter value b
	scanf(" %d", &b);	// Store user's input in b
	
	c = a+b;
	printf("c = a+b = %d", c);
	
	return 0;			// End of main function
}
