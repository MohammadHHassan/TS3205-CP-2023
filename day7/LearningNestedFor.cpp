// day7
// LearningNestedFor

#include <stdio.h>			// Library for printf and scanf

int main(void)				// Main function
{
	int row, col;
	
	printf("Multiplication table:\n\n");
	printf("\t|\t1\t2\t3\t4\t5\n");
	printf("----------------------------------------------------\n");
	
	for(row=1 ; row<=5 ; row++)
	{
		printf("%d\t|", row);
		for(col=1 ; col<=5 ; col++)
		{
			printf("\t%d", row*col);
		}
		printf("\n");
	}
	
	return 0;				// End of main function
}
