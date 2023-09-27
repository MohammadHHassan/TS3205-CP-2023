// day12
// Learning2DArrays

#include <stdio.h>

int main(void)
{
	int table[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int row, col;
	
	for(row=0 ; row<=2 ; row++)
	{
		for(col=0 ; col<=2 ; col++)
		{
			printf("%d\t", table[row][col]);
		}
		printf("\n");
	}
	
	printf("\ntable[0][0] = %d", table[0][0]);
	printf("\ntable[0][1] = %d", table[0][1]);
	printf("\ntable[2][1] = %d", table[2][1]);
	
	return 0;
}
