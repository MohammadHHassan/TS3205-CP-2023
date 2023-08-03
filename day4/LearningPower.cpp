// LearningPower

#include <stdio.h>		// Library for printf and scanf
#include <math.h>		// Library for mathematical functions

int main(void)
{
	double a, b, c;
	
	a = 2.0;
	b = 5.0;
	
	c = pow(a,b);
	
	printf("2 to the power of 5 = %g", c);
	
	printf("\n3 to the power of 4 = %g", pow(3,4));
	
	return 0;
}
