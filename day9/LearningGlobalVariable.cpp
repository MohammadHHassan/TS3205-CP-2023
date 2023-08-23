// day9
// LearningGlobalVariable

#include <stdio.h>			// Library for printf and scanf

void printText();			// Declaration of printText function
double money = 2.50;		// Global variable

int main(void)				// Main function
{
	// double money = 1.00;	// Local variable
	
	printf("Main: I have $%.2f in my pocket.\n", money);
	printText();
	
	return 0;				// End of main function
}

void printText()
{
	// double money = 5.00;	// Local variable
	
	printf("printText: I have $%.2f in my pocket.\n", money);
}


