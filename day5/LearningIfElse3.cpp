// day5
// LearningIfElse3

#include <stdio.h>		// Library for printf and scanf

int main(void)			// Main function
{
	int age;			// Declare age variable as integer
	
	printf("Please enter your age: ");	// Prompt a message for the user to enter their age
	scanf(" %d", &age);	// Store user's input in age variable
	
	if(age>=18)			// If user's age is greater than or equal to 18
	{
		printf("You are eligible for a driver's license :)");
	}
	else				// If user's age is less than 18
	{
		printf("You are NOT eligible for a driver's license :(");
	}
	
	printf("\nThank you!");
	
	return 0;			// End of main function
}
