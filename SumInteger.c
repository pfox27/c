/* Example 4.9 - Using nested loops to determine the sum of integers. */

#include<stdio.h>

int main(){
	int sum = 0;     /* Initialize sum variable. */
	int i = 1;      /* Outer loop control variable */
	int j = 1;	/* Inner loop control variable */
	int count = 0;    /* Number of sums to be calculated (will be user's choice) */

	/* Prompt for and read user input for number of integers to sum. */

	printf("\n Enter the number of integers you want to sum:  \n");
	scanf(" %d", &count);
	
	printf("# of Integers   Sum\n");
      	printf("~~~~~~~~~~~~~   ~~~\n");

	while(i <= count){
		/* sum = 0; / Initialize sum for inner loop */

		/* Calculate the sum of integers from 1 to i */

		while(j <=i){
			sum += j;
			j++;}

		printf("\n%d\t\t%d", i, sum);  /* Output sum from 1 to i */
		i++;
	}
	printf("\n");
	return 0;
}







