// day12
// LearningArrays
// Array is a collection of elements with the same data type

#include <stdio.h>

int main(void)
{
	int u[3] = {1, 2, 3};		// Declaration of array u. Size=3, Type=int
	int i, s[3];
	
	printf("u = (%d, %d, %d)\n", u[0], u[1], u[2]);		// Display the array u
	
	printf("\nUsing for loop, u = (");
	for(i=0 ; i<=2 ; i++)
	{
		printf("%d   ", u[i]);
	}
	printf(")\n");
	
	for(i=0 ; i<=2 ; i++)
	{
		s[i] = u[i]*2;
	}
	
	printf("\ns[i] = u[i]*2\n");
	printf("s = (%d, %d, %d)\n", s[0], s[1], s[2]);
	
	for(i=0 ; i<3 ; i++)
	{
		printf("\ns[%d] = %d", i, s[i]);
	}
	
	return 0;
}
