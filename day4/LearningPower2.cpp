// LearningPower2

#include <stdio.h>
#include <math.h>

int main(void)
{
	const double pi = 3.141592654;
	double area, r, h;
	
	r = 5.0;
	h = 8.0;
	
	printf("Given r=%.1f and h=%.1f\n", r, h);
	
	area = pi*r*(r+sqrt(pow(h,2)+pow(r,2)));
	
	printf("Area of cone = %.2f", area);
	
	return 0;
}
