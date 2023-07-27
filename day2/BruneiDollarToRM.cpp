// day2
// BruneiDollarToRM

#include <stdio.h>			// Header file for printf and scanf

int main(void)				// Main function
{
	double bnd, rm;			// Declare bnd and rm as double
	bnd = 500;				// Store the value inside bnd
	rm = bnd*3.41;			// Calculate the conversion to rm
	
	printf("BND to RM Converter:\n");		// Title of the application
	printf("BND %.2f = RM %.2f", bnd, rm);	// Print out the conversion
	
	return 0;				// End of main function
}
