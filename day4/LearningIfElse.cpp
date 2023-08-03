// LearningIfElse

#include <stdio.h>

int main(void)
{
	int a, remainder;
	
	printf("Please enter an integer value: ");
	scanf(" %d", &a);
	
	remainder = a%2;
	
	if(remainder==0)		// The condition if there is no remainder
	{
		printf("Your number is EVEN");
	}
	else					// The condition if there is a remainder
	{
		printf("Your number is ODD");
	}
	
	return 0;
}
