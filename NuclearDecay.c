/* A program to calculate the remaining quantity of a radioactive isotope. */

#include <stdio.h>
#include <math.h>

int main(void){
	float initial = 0;
	float current = 0;
	float halflife = 0;
	float time = 0;  /* Time elapsed */

	printf("\n Please enter the initial mass of isotope in kg: \n");
	scanf("%f" , &initial);

	printf("\n Please enter the half-life of the isotope: \n");
	scanf("%f" , &halflife);

	printf("\n Please enter the time elapsed using the sam units as half-life entered: \n");
	scanf("%f" , &time);

	current = initial * pow((0.5), time/halflife);
	printf("\n The half-life is %f" , halflife);
	printf("\n The time elapsed is %f" , time);
	printf("\n The number of intervals elapsed is %f" , time/halflife);

	printf("\n The current mass of isotope remaining is %f \n", current);
	return 0;
	}








