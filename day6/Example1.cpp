// day6
// Example1

#include <stdio.h>			// Header file for input and output

int main(void)				// Main function
{
	int a=10, b=15, c, answer;
	c = a+b;
	
	printf("Given a = %d, b = %d\n", a, b);		// Display value of a and b
	
	do
	{
		printf("What is a+b? ");	// Ask the user what is the answer of a+b
		scanf(" %d", &answer);		// Store user's answer in answer variable
		
		if(c!=answer)
		{
			printf("Wrong answer. Please try again.\n");
		}
	}while(c!=answer);		// Loop while the answer is incorrect
	
	printf("Your answer is correct! Thank you :)");
	
	return 0;				// End of main function
}
