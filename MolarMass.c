/* A program that calculates the molar mass of a given cjemical compound. */

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
		printf("\nPlease enter the molar mass of element %d in g/mol.\n", i);
		scanf("%f", &MolarMass);
		printf("\nPlease enter the number of atoms of this element that are in the compound (according to formula)\n");
		scanf("%d", &NumberOfAtoms);
		TotalMass = TotalMass + MolarMass * NumberOfAtoms;
	}
	printf("\nThe molar mass of the compound is %f g/mol.\n", TotalMass);

	return 0;
}








