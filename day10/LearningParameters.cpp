// day10
// LearningParameters

#include <stdio.h>

void stars(int n);		// Declaration of stars function with parameter n

int main(void)
{
	int k=5;
	
	stars(k);			// Print out 5 stars
	stars(2*k);			// Print out 2*5 stars
	stars(20);			// Print out 20 stars
	
	return 0;
}

void stars(int n)
{
	int i;
	
	for(i=1 ; i<=n ; i++)
	{
		printf("* ");		// Print out n number of stars 
	}
	printf("\n");			// Create a new line
}
