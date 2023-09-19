// day10
// LearningDoubleFunction

#include <stdio.h>
#include <math.h>

double hypo(double b, double h);	// Declaration hypo, type double, with 2 parameters b and h

int main(void)
{
	double base, height, hp;
	
	printf("This program calculates the hypotenuse value of a triangle.\n");
	
	printf("Please enter the base value: ");
	scanf(" %lf", &base);
	printf("Please enter the height value: ");
	scanf(" %lf", &height);
	
	hp = hypo(base, height);
	printf("\nHypotenuse = %.2f", hp);
	
	return 0;
}

double hypo(double b, double h)
{
	double c;
	
	c = sqrt(pow(b,2)+pow(h,2));	// Formula to find hypotenuse of a triangle with the given b and h
	return c;						// Return hypotenuse value to the main function
}
