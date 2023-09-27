// day11
// Program1

#include <stdio.h>

void yourName(int a);	// The name of function is yourName with one parameter (a)

int main(void)
{
	int x;
	
	printf("How many times do you want your name to be printed?\n");
	scanf(" %d", &x);
	
	yourName(x);
	
	return 0;
}

void yourName(int a)
{
	int i;
	
	for(i=0 ; i<a ; i++)
	{
		printf("%d. Hj Mohammad Hj Hassan\n", i);
	}
}


