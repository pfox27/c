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

	scanf("%d", &NumberOfElements);
	for (int i = 0; i < NumberOfElements; i++){
		printf("\nPlease enter the atomic number for element %d.\n", i);
		scanf("%f", &AtomicNumber);
		printf("\nPlease enter the number of atoms of this element that are in the compound (according to formula)\n");
		scanf("%d", &NumberOfAtoms);
		if AtomicNumber == 1
			MolarMass = 1.01;
		else if AtomicNumber == 2
			MolarMass = 4.00;
		else if AtomicNumber == 3
			MolarMass = 6.94;
		else if AtomicNumber == 4
			MolarMass = 9.01;
		else if AtomicNumber == 5
			MolarMass = 10.81;
		else if AtomicNumber == 6
			MolarMass = 12.01;
		else if AtomicNumber == 7
			MolarMass = 14.01;
		else if AtomicNumber == 8
			MolarMass = 16.00;
		else if AtomicNumber == 9
			MolarMass = 19.00;
		else if AtomicNumber == 10
			MolarMass = 20.18;
		else if AtomicNumber == 11
			MolarMass = 22.99;
		else if AtomicNumber == 12
			MolarMass = 24.31;
		else if AtomicNumber == 13
			MolarMass = 26.98;
		else if AtomicNumber == 14
			MolarMass = 28.09;
		else if AtomicNumber == 15
			MolarMass = 30.97;
		else if AtomicNumber == 16
			MolarMass = 32.07;
		else if AtomicNumber == 17
			MolarMass = 35.45;
		else if AtomicNumber == 18
			MolarMass = 39.95;
		else if AtomicNumber == 19
			MolarMass = 39.10;
		else if AtomicNumber == 20
			MolarMass = 40.08;
		else if AtomicNumber == 21
			MolarMass = 44.96;
		else if AtomicNumber == 22
			MolarMass = 47.87;
		else if AtomicNumber == 23
			MolarMass = 50.94;
		else if AtomicNumber == 24
			MolarMass = 51.99;
		else if AtomicNumber == 25
			MolarMass = 54.94;
		else if AtomicNumber == 26
			MolarMass = 55.85;
		else if AtomicNumber == 27
			MolarMass = 58.93;
		else if AtomicNumber == 28
			MolarMass = 58.69;
		else if AtomicNumber == 29
			MolarMass = 63.55;

















		TotalMass = TotalMass + MolarMass * NumberOfAtoms;
	}
	printf("\nThe molar mass of the compound is %f g/mol.\n", TotalMass);

	return 0;
}








