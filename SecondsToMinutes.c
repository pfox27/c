/* A program to convert time from seconds to minutes. */

#include <stdio.h>
#include <math.h>

int main(void){
	int minutes = 0;
	int seconds = 0;
	int remainder = 0;
	
	printf("\n Please enter the time in seconds: \n");
	scanf("%d" , &seconds);

	minutes = seconds/60;
        remainder = seconds%60;
		
	printf("\n The converted time is %d minutes %d seconds. \n\n" , minutes, remainder);

	return 0;
}







