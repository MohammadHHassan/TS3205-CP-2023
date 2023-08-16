// day7
// LearningDelay

#include <stdio.h>				// Header file for printf and scanf
#include <windows.h>			// Header file for delay

int main(void)					// Main function
{
	int j;
	
	for(j=1 ; j<=10 ; j++)
	{
		printf("%d. Haji Mohammad bin Haji Hassan\n", j);	// Print out your name 10 times
		Sleep(1000);			// Delay for 1 sec / 1000 millisec
	}
	
	return 0;					// End of main function
}
