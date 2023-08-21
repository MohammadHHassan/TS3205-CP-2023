// day8
// QuadraticEquation

#include <stdio.h>			// Library for printf and scanf
#include <math.h>			// Library for mathematical equation

int main(void)				// Main function
{
	double a, b, c, x1, x2;
	
	a = 3.0;
	b = -7.0;
	c = 2.0;
	
	printf("Solving quadratic equation for: \n");
	printf("(%g*pow(x,2)) + (%g*x) + %g = 0", a, b, c);
	
	x1 = (-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
	x2 = (-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
	
	printf("\n\nRoots of the quadratic equation are %.2f & %.2f", x1, x2);
	
	return 0;				// End of main function
}
