/* Example 4.3b - A program that computes the factorial a user-specified integer. */

#include<stdio.h>

int main(){
  long factorial = 0L;  /* Stores the value of the factorial. */
  int integer = 0;  /* The integer for which the factorial should be computed. */
  int i = 0; /* The loop counter. */

  printf("\nPlease enter the integer for which you'd like the factorial computed:\n"); /* Read the integer for which the factorial must be computed*/
  scanf(" %d", &integer);

  /* Compute the factorial for the integer input. */

  factorial = integer;
  printf("/nThe value of factorial is currently %ld\n", factorial);
  printf("/nThe value of i is currently %d\n", i);
  
  for(i = integer; i <= 2; i--){
    factorial = factorial * (i - 1);
  printf("/nThe value of %ld is currently\n", factorial);
  printf("/nThe value of %d is currently\n", i);
}
    printf("\nThe factorial of the number %d is %ld\n", integer, factorial);
  }
  
