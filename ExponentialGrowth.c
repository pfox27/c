/* A program to calculate the exponential growth an initial quantity. */

#include <stdio.h>
#include <math.h>

int main(void){
	float initial = 0;
	float current = 0;
	float rate = 0;
	float N = 0;  /* Number of Intervals */

	printf("\n Please enter the initial value: \n");
	scanf("%f" , &initial);

	printf("\n Please enter the percent increase per interval: \n");
	scanf("%f" , &rate);

	printf("\n Please enter the number of intervals: \n");
	scanf("%f" , &N);

	float percent = rate/100;
	printf("\n The percent is %f" , percent);
	printf("\n The rate is %f" , rate);
	printf("\n The number of intervals is %f" , N);

	current = initial * pow((1 + percent/N), N);

	printf("\n The current value is %f \n", current);
	return 0;
	}








