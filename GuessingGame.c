/* Example 4.7 - A program that allows the user to play a guessing game based on a "secret" number entered by another user */

#include<stdio.h>

int main(){
	int secret = 0;
	int guess = 0;
	int counter = 0;
	printf("\nWelcome to the mystical guessing game.  Please look away as the Guessmeister enters the secret number between 1 and 20.  No cheating lest ye forever be shunned!\n");
        
	printf("\nGuessMeister, please enter secret number:\n");
	scanf("%d", &secret);

        for( ; counter > 0; counter --){
		printf("\nYou have %d tr%s left.", counter, counter == 1 ? "y" : "ies");
		printf("\nPlease enter a guess:\n");   /* User is prompted for a guess */
		scanf("%d", &guess);                   /* Read in a guess */

		/* Check for a correct guess */

		if(guess == secret){
			printf("\nThree cheers, you guessed the secret number!\n");
			return 0;   /* End of program */
		}

		/* Check for invaliod guess */

		if(guess < 1 || guess > 20)
				printf("\nGuess has to be between 1 and 20, please.\n");
				else
				printf("\nSorry.  %d is incorrect. \n" , guess);
				}
				}





