/* Example 4.7 - A program that allows the user to play a guessing game based on a "secret" number entered by another user */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int secret = 0;
	int guess = 0;
	int lower = 1;
	int upper = 20;
	int counter = 0;
	printf("\nWelcome to the mystical guessing game.  You will have three attempts.\n");
        
	srand(time(0));          /* Generate the random secret mystical number. */
	secret = (rand() % (upper - lower + 1)) + lower; 

        for(counter = 3; counter > 0; counter --){
		printf("\nYou have %d tr%s left.", counter, counter == 1 ? "y" : "ies");
		printf("\nPlease enter a guess:\n");   /* User is prompted for a guess */
		scanf("%d", &guess);                   /* Read in a guess */

		/* Check for a correct guess */

		if(guess == secret){
			printf("\nThree cheers, you guessed the secret number!\n");
			return 0;   /* End of program */
		}

		/* Check for invalid guess */

		if(guess < 1 || guess > 20)
				printf("\nGuess has to be between 1 and 20, please.\n");
				else
				printf("\nSorry.  %d is incorrect. \n" , guess);
				}
		printf("You have had three attempts and have unfortunately failed. \n");
		printf("The correct mystical number was %d \n" , secret);

		return 0;
		}





