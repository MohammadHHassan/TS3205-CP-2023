// day5
// LearningNestedIf

#include <stdio.h>			// Library for printf and scanf

int main(void)				// Main function
{
	int age;				// Declare age variable as integer
	
	printf("Please enter your age: ");	// Ask the user to enter their age
	scanf(" %d", &age);		// Store user's input in age variable
	
	if(age>=0 && age<=100)	// If age entered is in between 0-100
	{
		printf("Age is valid.\n");
		
		if(age<=12)						// If age is less than or equal to 12
		{
			printf("Children.\n");
		}
		else if(age>12 && age<18)		// If age is 13, 14, 15, 16 or 17
		{
			printf("Teenager.\n");
		}
		else if(age>=18 && age<60)		// If age is 18 and above until 59
		{
			printf("Adult.\n");
			
			if(age<=30)
			{
				printf("Young Adult.\n");
			}
			else
			{
				printf("Mature Adult.\n");
			}
		}
		else							// If age is 60 until 100
		{
			printf("Senior.\n");
		}
	}
	else					// If user entered age<0 or age>100
	{
		printf("Invalid age entered.\n");
	}
	
	printf("Thank you :)");
	
	return 0;				// End of main function
}
