// 	Exercise4

/*	Declare two variables called x and y in double
	Prompt a message for the user to enter a positive number
	Store the value entered inside x
	
	If the number entered is greater than 0,
	Calculate its square root
	Store the result inside y
	Print out the result
	
	Lastly, print out "Thank you" regardless if the user entered
	a positive number or not.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	double x, y;
	
	printf("Please enter a positive number: ");
	scanf(" %lf", &x);
	
	if(x>0)
	{
		y = sqrt(x);
		printf("Square root of %g = %.2f\n", x, y);
	}
	
	printf("Thank you");
	
	return 0;
}

