
/* A program to perfrom simple calculations */

#include <stdio.h>
#include <math.h>

void main(){
	double number01 = 0.0;  // first operand
        double number02 = 0.0;  // second operand
	char operation = 0;    // operation indicator


	printf("\nPermitted operations are addition, subtraction, multiplication and division\n");
	printf("\nPlease enter the calculation \n");
	scanf("%lf %c %lf", &number01, &operation, &number02);

	/* Code to check the input operations and to check for divide by zero:  */

	switch(operation)
	    {
		case '+':           /* no checks needed for addition */
		        printf("= %lf\n",number01 + number02);
                        break;
                       

		case '-':	    /* no checks needed for subtraction   */
			printf("= %lf\n",number01 - number02);
			break;
                       

		case '*':           /* no checks needed for multiplication */
		        printf("= %lf\n",number01 * number02);
                        break;
                    

		case '/':           /* check second operand for zero      */
			if(number02 == 0)
				printf("\n\n\aDivision by zero ERROR!\n");
			else
                           printf("= %lf\n",number01 / number02);

			break;


		default:            /* Operation is invalid if we get to here */
			printf("\nOperation NOT permitted!\n");
	}

 
//return (0);
}







