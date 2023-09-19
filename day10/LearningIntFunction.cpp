// day10
// LearningIntFunction

#include <stdio.h>

int addTen(int a);			// Declaration of addTen function with parameter a

int main(void)
{
	int x, y;
	
	x = 50;
	printf("x = %d\n", x);
	
	y = addTen(x);
	printf("x+10 = %d\n", y);
	
	printf("5+10 = %d\n", addTen(5));
	printf("25+10 = %d\n", addTen(25));
	
	return 0;
}

int addTen(int a)
{
	int b;
	
	b = a+10;
	return b;			// return the value to the main function
}
