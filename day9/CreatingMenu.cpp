// day9
// CreatingMenu

#include <stdio.h>		// Library for printf and scanf
#include <windows.h>	// Library for delay/Sleep
#include <stdlib.h>		// Library for screen clear

int main(void)			// Main function
{
	char input;
	double a=0, b=0;
	
	do
	{
		system("cls");	// Clear the screen
		printf("Current values:\n");
		printf("a = %.1f,\tb = %.1f,\ta+b = %.1f\n", a, b, (a+b));
		printf("\nYour menu:\n");
		printf("a) Enter a new value for 'a'. \n");
		printf("b) Enter a new value for 'b'. \n");
		printf("q) Quit.\n");
		
		printf("\nPlease enter your choice: ");
		scanf(" %c", &input);
		
		switch(input)
		{
			case 'A':	
			case 'a':	printf("Enter a new value for 'a': ");		// When user entered A or a
						scanf(" %lf", &a);							// Store new value of a
						break;										// Exit from switch
						
			case 'B':
			case 'b':	printf("Enter a new value for 'b': ");		// When user entered B or b
						scanf(" %lf", &b);							// Store new value of b
						break;										// Exit from switch
			
			case 'Q':	
			case 'q':	printf("This program will terminate. Thank you :)");	// When user entered Q or q
						break;										// Exit from switch
						
			default:	printf("Invalid key.");
						Sleep(5000);	// Delay by 5 seconds
		}
		
	}while(input!='Q' && input!='q');	// Loop while user does not enter q or Q
	
	return 0;			// End of main function
}
