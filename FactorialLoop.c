/* Example 4.9b - Using nested loops to determine the factorial of a chosen integer. */

#include<stdio.h>

int main(){
	float factorial = 1;     /* Initialize sum variable. */
	int i = 1;      /* Outer loop control variable */
	int j = 1;	/* Inner loop control variable */
	int count = 0;    /* Integer indicating factorial to be calculated (will be user's choice) */

	/* Prompt for and read user input for factorial to be computed. */

	printf("\n Enter the factorial you wish computed:  \n");
	scanf(" %d", &count);
	
	printf("Integers       Factorial\n");
      	printf("~~~~~~~~       ~~~~~~~~~\n");

	while(i <= count){
		/* factorial = 0; / Initialize sum for inner loop */

		/* Calculate the sum of integers from 1 to i */

		while(j <=i){
			factorial = factorial * j;
			j++;}

		printf("\n%d\t\t%lf", i, factorial);  /* Output factorial from 1 to i */
		i++;
	}
	printf("\n");
	return 0;
}







