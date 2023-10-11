// day13
// LearningStrings
// Strings = Collection of characters
// Array = Collection of elements with same data type

#include <stdio.h>

int main(void)
{
	char name[100];		// Declaration of name array with 100 characters (string)
	
	printf("Please enter your full name: ");
	scanf(" %[^\n]s", &name);		// %s for string, stop reading at new line
	
	printf("Your name is %s", name);	// Print out your name
	
	return 0;
}
