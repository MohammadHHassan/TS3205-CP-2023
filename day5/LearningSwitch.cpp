// day5
// LearningSwitch

#include <stdio.h>			// Library for printf and scanf

int main(void)				// Main function
{
	char input;				// Declare input variable as character
	
	printf("Please enter 'A' or 'B': ");	// Ask the user to enter A or B
	scanf(" %c", &input);	// Store user's input in input variable
	
	switch(input)
	{
		case 'A':	printf("You typed 'A'");	// If user entered A
					break;						// Exit from flow/loop
					
		case 'a':	printf("You typed 'a'");	// If user entered a
					break;						// Exit from flow/loop
					
		case 'B':	
		case 'b':	printf("You typed 'B' or 'b'");		// If user entered B or b
					break;						// Exit from flow/loop
					
		default:	printf("You didn't type 'A' or 'B'");	// If user does not enter A or B
	}
	
	printf("\nThank you :)");
	
	return 0;				// End of main function
}
