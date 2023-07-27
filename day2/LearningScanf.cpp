// day2
// LearningScanf

#include <stdio.h>		// Header file for input (scanf) & output (printf)

int main(void)
{
	int age;			// Declare variable to store user's age
	
	printf("Hi Mohammad! :)\n");		// Greet user
	
	printf("How old are you? ");		// Prompt a message for user to enter their age
	scanf(" %d", &age);					// Store user's input in variable age
	
	printf("You are %d years old", age);	// Show the user's age
	
	return 0;
}
