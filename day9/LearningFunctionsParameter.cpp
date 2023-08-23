// day9
// LearningFunctionsParameter

#include <stdio.h>			// Library for printf and scanf

double moneyConverter(double money);	// Declaration of moneyConverter function. Contains one parameter (double money)

int main(void)				// Main function
{
	double duit, input;
	
	printf("Welcome to money converter.\n");
	printf("Today's rate:\n");
	printf("BND 1.00 = RM 3.39\n");
	
	printf("\nPlease enter your money: ");
	scanf(" %lf", &input);
	
	duit = moneyConverter(input);
	
	printf("\nYour BND %.2f has been converted to RM %.2f\n", input, duit);
	
	printf("\nBND 200.00 = RM %.2f", moneyConverter(200));
	printf("\nBND 300.00 = RM %.2f", moneyConverter(300));
	printf("\nBND 400.00 = RM %.2f", moneyConverter(400));
	
	return 0;				// End of main function
}

double moneyConverter(double money)
{
	return money*3.39;
}
