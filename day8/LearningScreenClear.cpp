// day8
// LearningScreenClear

#include <stdio.h>			// Header file for input/output
#include <windows.h>		// Header file for delay/sleep
#include <stdlib.h>			// Header file for screen clear

int main(void)				// Main function
{
	int i;
	
	for(i=10 ; i>=0 ; i--)
	{
		printf("This program will be terminated in %d second(s)", i);
		Sleep(1000);		// Delay for 1 second
		system("cls");		// To clear the screen
	}
	
	printf("BOOM!");
	
	return 0;				// End of main function
}
