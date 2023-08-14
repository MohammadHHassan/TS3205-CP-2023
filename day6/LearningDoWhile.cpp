// day6
// LearningDoWhile

#include <stdio.h>				// Library for printf and scanf

int main(void)					// Main function
{
	double x;					// Declare variable x as double
	
	do
	{
		printf("\nPlease enter a negative number: ");	// Ask the user to enter a negative number
		scanf(" %lf", &x);		// Store user's input in x
	}while(x>=0);				// Do the loop while x is positive number
	
	printf("\nYour number is %g", x);	// Print out user's number
	printf("\nThank you!");
	
	return 0;					// End of main function
}
