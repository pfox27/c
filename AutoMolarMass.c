/* A program that automatically calculates the molar mass of a given chemical compound, given the identity of its constituent atoms. */

#include <stdio.h>
#include <math.h>



int main(){
	printf("\nMolar Mass Calculator\n");
	printf("~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\nPlease enter the number of elements in the compound:\n");
	int NumberOfElements = 0;
	float MolarMass = 0;
	float TotalMass = 0;
	int NumberOfAtoms = 0;
	char = Symbol[];

	scanf("%d", &NumberOfElements);
	for (int i = 0; i < NumberOfElements; i++){
		printf("\nPlease enter the symbol for element %d.\n", i);
		scanf("%s", &Symbol);
		printf("\nPlease enter the number of atoms of this element that are in the compound (according to formula)\n");
		scanf("%d", &NumberOfAtoms);
		if Symbol == "H"
			MolarMass = 1.01;
		else if Symbol == "He"
			MolarMass = 4.00;
		else if Symbol == "Li"
			MolarMass = 6.94;
		else if Symbol == "Be"
			MolarMass = 9.01;
		else if Symbol == "B"
			MolarMass = 10.81;
		else if Symbol  == "C"
			MolarMass = 12.01;
		else if Symbol == "N"
			MolarMass = 14.01;
		else if Symbol == "O"
			MolarMass = 16.00;
		else if Symbol  == "F"
			MolarMass = 19.00;
		else if Symbol == "Ne"
			MolarMass = 20.18;
		else if Symbol == 11
			MolarMass = 22.99;
		else if Symbol == 12
			MolarMass = 24.31;
		else if Symbol == 13
			MolarMass = 26.98;
		else if Symbol == 14
			MolarMass = 28.09;
		else if Symbol == 15
			MolarMass = 30.97;
		else if Symbol == 16
			MolarMass = 32.07;
		else if Symbol == 17
			MolarMass = 35.45;
		else if Symbol == 18
			MolarMass = 39.95;
		else if Symbol == 19
			MolarMass = 39.10;
		else if Symbol == 20
			MolarMass = 40.08;
		else if Symbol == 21
			MolarMass = 44.96;
		else if Symbol == 22
			MolarMass = 47.87;
		else if Symbol == 23
			MolarMass = 50.94;
		else if Symbol == 24
			MolarMass = 51.99;
		else if Symbol == 25
			MolarMass = 54.94;
		else if Symbol == 26
			MolarMass = 55.85;
		else if Symbol == 27
			MolarMass = 58.93;
		else if Symbol == 28
			MolarMass = 58.69;
		else if Symbol == 29
			MolarMass = 63.55;

















		TotalMass = TotalMass + MolarMass * NumberOfAtoms;
	}
	printf("\nThe molar mass of the compound is %f g/mol.\n", TotalMass);

	return 0;
}








