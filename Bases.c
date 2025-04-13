/* bases.c - A program that prints the numbers 1 - 50 in decimal, octal and hex format. */

#include <stdio.h>

int main(void){

printf("Decimal		Octal		Hexadecimal\n");
printf("~~~~~~~         ~~~~~           ~~~~~~~~~~~\n");

	for (int i = 0; i<= 50; i++){
		printf("%d\t\t%o\t\t%x\t\t\n", i, i, i);
	}

	return 0;
}












