// LearningIf

#include <stdio.h>

int main(void)
{
	int x;
	
	printf("Please enter a positive number: ");
	scanf(" %d", &x);
	
	if(x<0)			// If x is less than 0 (negative number)
	{
		printf("A negative number has been entered.\n");
		printf("Changing sign...");
		x = -x;		// New x = -(Old x)
	}
	
	printf("\nNumber entered: %d", x);
	
	return 0;
}
