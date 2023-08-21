// day8
// LearningBisection

#include <stdio.h>			// printf and scanf library
#include <math.h>			// Math library

int main(void)				// Main function
{
	double xmin, xmid, xmax, fmin, fmid, fmax, p;
	int count=0;
	
	printf("This program finds the root of pow(x,3)+(2*x)-4=0 using Bisection Method.\n\n");
	
	printf("Please enter the value of xmin: ");
	scanf(" %lf", &xmin);
	
	printf("Please enter the value of xmax: ");
	scanf(" %lf", &xmax);
	
	do
	{
		count++;			// Count the number of iteration / bisection
		
		xmid = 0.5*(xmin+xmax);		// Find the mid-point
		
		fmin = pow(xmin,3)+(2*xmin)-4;		// Calculate f(xmin)
		fmid = pow(xmid,3)+(2*xmid)-4;		// Calculate f(xmid)
		fmax = pow(xmax,3)+(2*xmax)-4;		// Calculate f(xmax)
		
		p = fmin*fmid;		// Calculate p = f(xmin)*f(xmid)
		
		if(p<0)
		{
			xmax = xmid;
		}
		else if(p>0)
		{
			xmin = xmid;
		}
		else
		{
			break;			// Break from the loop, found the root
		}
		
	}while((xmax-xmin)>0.00001);	// Repeat while difference of xmin and xmax >0.00001
	
	printf("\n\nRoot = %f", xmid);					// Display the root
	printf("\nNumber of iterations = %d", count);	// Display the iteration count
	
	return 0;				// End of main function
}
