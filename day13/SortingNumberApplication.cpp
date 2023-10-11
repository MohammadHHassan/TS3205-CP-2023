// day13
// SortingNumberApplication

#include <stdio.h>
#include <windows.h>		// Header file for delay

int main(void)
{
	int v[5] = {10, -20, 100, -2, 5};
	int j, k, smallest, temp;
	
	printf("Given array v[5] = {10, -20, 100, -2, 5}\n\n");
	printf("This program will arrange the array in ascending order.\n");
	
	for(j=0 ; j<5 ; j++)
	{
		smallest = j;	// Arranging the smaller number to be in earlier array
		
		for(k=j+1 ; k<5 ; k++)
		{
			if(v[k] < v[smallest])		// Comparing the values in array
			{
				smallest = k;	
			}
		}
		
		if(j==smallest)
		{
			printf("\n=============================================");
			printf("\nArrangement of numbers is no longer required.");
			printf("\n=============================================");
			Sleep(2000);		// Delay for 2 sec
			break;
		}
		else
		{
			printf("\nSwitching the smallest number with v[%d]:\n", j);
			printf("v[%d] = %d\t\tv[%d] = %d\n", j, v[j], smallest, v[smallest]);
			Sleep(2000);
			
			// Switching v[j] with v[smallest]
			temp = v[j];
			v[j] = v[smallest];
			v[smallest] = temp;
			
			printf("After switching...\n");
			printf("v[%d] = %d\t\tv[%d] = %d\n", j, v[j], smallest, v[smallest]);
			Sleep(2000);
		}
	}
	
	printf("\n\nIn ascending order, v[5] = ");
	
	for(j=0 ; j<5 ; j++)
	{
		printf("%d\t", v[j]);
	}
	
	return 0;
}
