// day5
// LearningIfElseChain

#include <stdio.h>			// Library for printf and scanf

int main(void)				// Main function
{
	char status;			// Declare variable status as character
	
	printf("Please enter your marital status (M,S,D,W): ");
	scanf(" %c", &status);	// Store user's input in status variable
	
	if(status=='M' || status=='m')			// If user entered M or m
	{
		printf("Married.");
	}
	else if(status=='S' || status=='s')		// If user entered S or s
	{
		printf("Single.");
	}
	else if(status=='D' || status=='d')		// If user entered D or d
	{
		printf("Divorced.");
	}
	else if(status=='W' || status=='w')		// If user entered W or w
	{
		printf("Widowed.");
	}
	else					// If user does not enter M/m/S/s/D/d/W/w
	{
		printf("Invalid character. You are only allowed to enter M, S, D or W.");
	}
	
	printf("\nThank you :)");
	
	return 0;				// End of main function
}
