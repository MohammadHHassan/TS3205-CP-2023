// day9
// LearningFunctions

#include <stdio.h>				// Library for printf and scanf

void printSomething();			// Declaring function called printSomething

int main(void)					// Main function
{
	int i;
	
	for(i=0 ; i<10 ; i++)
	{
		printSomething();
	}
	
	return 0;					// End of main function
}

void printSomething()			
{
	printf("Name: Haji Mohammad bin Haji Hassan\n");
	printf("School: Politeknik Brunei\n");
	printf("Gender: Male\n");
}
