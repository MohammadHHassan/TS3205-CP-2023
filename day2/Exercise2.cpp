// day2
// Exercise2

/*	Copy and paste all the code lines from BruneiDollarToRM.c
	Modify this program so that it accepts user's input for the BND value.
	(Note that the conversion specificer scanf(" %lf"..... for double)
	Print out the conversion
*/

#include <stdio.h>			// Header file for printf and scanf

int main(void)				// Main function
{
	double bnd, rm;			// Declare bnd and rm as double

	printf("BND to RM Converter:\n");		// Title of the application

	printf("Please enter the BND value you want to convert: "); // Prompt a message for the user to enter BND value
	scanf(" %lf", &bnd);	// Store the user's input in bnd

	rm = bnd*3.41;			// Calculate the conversion to rm
	
	printf("BND %.2f = RM %.2f", bnd, rm);	// Print out the conversion
	
	return 0;				// End of main function
}
