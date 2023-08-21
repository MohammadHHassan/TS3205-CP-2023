// day8
// LearningLoopBreak

#include <stdio.h>			// Library for printf and scanf
#include <stdlib.h>			// Screen clear library

int main(void)				// Main function
{
	char input;
	
	while(true)				// Forever loop
	{
		printf("Menu:\n");
		printf("1. Press 'e' to exit.\n");
		printf("2. Press any other key to loop.\n");
		
		printf("Your input: ");
		scanf(" %c", &input);
		
		if(input=='e')
		{
			printf("Exiting...\n");
			break;				// Break out from the loop
		}
		
		system("cls");
	}
	
	printf("Thank you :)");
	
	return 0;				// End of main function
}
