/* Example 4.3b - A program that computes the factorial a user-specified integer. */

#include<stdio.h>

int main(){
  int factorial = 0;  /* Stores the value of the factorial. */
  int number = 0;  /* The integer for which the factorial should be computed. */
  int i = 0; /* The loop counter. */

  printf("\nPlease enter the integer for which you'd like the factorial computed:\n"); /* Read the integer for which the factorial must be computed*/
  scanf(" %d", &number);

  /* Compute the factorial for the integer input. */

  factorial = number;
  
  for(i = number; i >= 2; i--)
    factorial = factorial * (i - 1); 

    printf("\nThe factorial of the number %d is %d\n", number, factorial);
    printf("\n");
    return 0;
  }
  
