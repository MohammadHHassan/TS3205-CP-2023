// day7
// Program2

/*	Prompt a message for the user to enter a value 3 times
	Store the value in x (double)
	Sum all the values together
	Give 1 second delay for each prompt
	
	Count the amount of large values (if x>100)
	Calculate the average of the 3 values
	Print out: Sum, Large Values & Average
*/

#include <stdio.h>			// Library for printf and scanf
#include <windows.h>		// Library for delay/sleep

int main(void)				// Main function
{
	int i, largeValues=0;
	double x, sum=0, average;
	
	for(i=0 ; i<3 ; i++)
	{
		printf("Please enter a value: ");		// Prompt the user to enter a value
		scanf(" %lf", &x);		// Store the value in x
		
		sum = sum+x;			// Calculate the sum of all values
		
		if(x>100)
		{
			largeValues++;		// Increment largeValues if x>100 entered
		}
		
		Sleep(1000);			// Give 1 second delay
	}
	
	average = sum/3;			// Calculate the average of the 3 numbers
	
	printf("\nSum = %.1f", sum);							// Print out the sum
	printf("\nLarge values count = %d", largeValues);		// Print out large values counter
	printf("\nAverage = %.1f", average);					// Print out the average of the 3 values
	
	return 0;				// End of main function
}
