/* A program that automatically calculates the molar mass of a given chemical compound, given the identity of its constituent atoms. */

#include <stdio.h>
#include <math.h>
#include <string.h>


int main(){
	printf("\nMolar Mass Calculator\n");
	printf("~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\nPlease enter the number of elements in the compound:\n");
	int NumberOfElements = 0;
	float MolarMass = 0;
	float TotalMass = 0;
	int NumberOfAtoms = 0;
	char Symbol[] = "0";

	scanf("%d", &NumberOfElements);
	for (int i = 1; i <= NumberOfElements; i++){
		printf("\nPlease enter the symbol for element %d.\n", i);
		scanf("%s", Symbol);

		if (strcmp(Symbol, "H") == 0)
			MolarMass = 1.01;
		else if (strcmp(Symbol, "He") == 0)
			MolarMass = 4.00;
		else if (strcmp(Symbol, "Li") == 0)
			MolarMass = 6.94;
		else if (strcmp(Symbol, "Be") == 0)
			MolarMass = 9.01;
		else if (strcmp(Symbol, "B") == 0)
			MolarMass = 10.81;
		else if (strcmp(Symbol, "C") == 0)
			MolarMass = 12.01;
		else if (strcmp(Symbol, "N") ==0)
			MolarMass = 14.01;
		else if (strcmp(Symbol, "O") == 0)
			MolarMass = 16.00;
		else if (strcmp(Symbol, "F") == 0)
			MolarMass = 19.00;
		else if (strcmp(Symbol, "Ne") == 0)
			MolarMass = 20.18;
		else if (strcmp(Symbol, "Na") == 0)
			MolarMass = 22.99;
		else if (strcmp(Symbol, "Mg") == 0)
			MolarMass = 24.31;
		else if (strcmp(Symbol, "Al") == 0)
			MolarMass = 26.98;
		else if (strcmp(Symbol, "Si") == 0)
			MolarMass = 28.09;
		else if (strcmp(Symbol, "P") == 0)
			MolarMass = 30.97;
		else if (strcmp(Symbol, "S") == 0)
			MolarMass = 32.07;
		else if (strcmp(Symbol, "Cl") == 0)
			MolarMass = 35.45;
		else if (strcmp(Symbol, "Ar") == 0)
			MolarMass = 39.95;
		else if (strcmp(Symbol, "K") == 0)
			MolarMass = 39.10;
		else if (strcmp(Symbol, "Ca") == 0)
			MolarMass = 40.08;
		else if (strcmp(Symbol, "Sc") == 0)
			MolarMass = 44.96;
		else if (strcmp(Symbol, "Ti") == 0)
			MolarMass = 47.87;
		else if (strcmp(Symbol, "V") == 0)
			MolarMass = 50.94;
		else if (strcmp(Symbol, "Cr") == 0)
			MolarMass = 51.99;
		else if (strcmp(Symbol, "Mn") == 0)
			MolarMass = 54.94;
		else if (strcmp(Symbol, "Fe") == 0)
			MolarMass = 55.85;
		else if (strcmp(Symbol, "Co") == 0)
			MolarMass = 58.93;
		else if (strcmp(Symbol, "Ni") == 0)
			MolarMass = 58.69;
		else if (strcmp(Symbol, "Cu") == 0)
			MolarMass = 63.55;
		else if (strcmp(Symbol, "Zn") == 0)
			MolarMass = 65.38;
		else if (strcmp(Symbol, "Ga") == 0)
			MolarMass = 69.72;
		else if (strcmp(Symbol, "Ge") == 0)
			MolarMass = 72.64;
		else if (strcmp(Symbol, "As") == 0)
			MolarMass = 74.92;
		else if (strcmp(Symbol, "Se") == 0)
			MolarMass = 78.96;
		else if (strcmp(Symbol, "Br") == 0)
			MolarMass = 79.90;
		else if (strcmp(Symbol, "Kr") == 0)
			MolarMass = 83.80;
		else if (strcmp(Symbol, "Rb") == 0)
			MolarMass = 85.47;
		else if (strcmp(Symbol, "Sr") == 0)
			MolarMass = 87.62;
		else if (strcmp(Symbol, "Y") == 0)
			MolarMass = 88.91;
		else if (strcmp(Symbol, "Zr") == 0)
			MolarMass = 91.22;
		else if (strcmp(Symbol, "Nb") == 0)
			MolarMass = 92.91;
		else if (strcmp(Symbol, "Mo") == 0)
			MolarMass = 95.96;
		else if (strcmp(Symbol, "Tc") == 0)
			MolarMass = 98;
		else if (strcmp(Symbol, "Ru") == 0)
			MolarMass = 101.07;
		else if (strcmp(Symbol, "Rh") == 0)
			MolarMass = 102.91;
		else if (strcmp(Symbol, "Pd") == 0)
			MolarMass = 106.42;
		else if (strcmp(Symbol, "Ag") == 0)
			MolarMass = 107.87;
		else if (strcmp(Symbol, "Cd") == 0)
			MolarMass = 112.41;
		else if (strcmp(Symbol, "In") == 0)
			MolarMass = 114.82;
		else if (strcmp(Symbol, "Sn") == 0)
			MolarMass = 118.71;
		else if (strcmp(Symbol, "Sb") == 0)
			MolarMass = 121.76;
		else if (strcmp(Symbol, "Te") == 0)
			MolarMass = 127.6;
		else if (strcmp(Symbol, "I") == 0)
			MolarMass = 126.91;
		else if (strcmp(Symbol, "Xe") == 0)
			MolarMass = 131.29;
		else if (strcmp(Symbol, "Cs") == 0)
			MolarMass = 132.91;
		else if (strcmp(Symbol, "Ba") == 0)
			MolarMass = 137.33;
		else if (strcmp(Symbol, "La") == 0)
			MolarMass = 138.91;
		else if (strcmp(Symbol, "Hf") == 0)
			MolarMass = 178.49;
		else if (strcmp(Symbol, "Ta") == 0)
			MolarMass = 180.85;
		else if (strcmp(Symbol, "Ta") == 0)
			MolarMass = 183.84;
		else if (strcmp(Symbol, "Re") == 0)
			MolarMass = 186.21;
		else if (strcmp(Symbol, "Os") == 0)
			MolarMass = 190.23;
		else if (strcmp(Symbol, "Ir") == 0)
			MolarMass = 192.22;
		else if (strcmp(Symbol, "Pt") == 0)
			MolarMass = 195.08;
		else if (strcmp(Symbol, "Au") == 0)
			MolarMass = 196.97;
		else if (strcmp(Symbol, "Hg") == 0)
			MolarMass = 200.59;
		else if (strcmp(Symbol, "Tl") == 0)
			MolarMass = 204.38;
		else if (strcmp(Symbol, "Pb") == 0)
			MolarMass = 207.2;
		else if (strcmp(Symbol, "Bi") == 0)
			MolarMass = 208.98;
		else if (strcmp(Symbol, "Po") == 0)
			MolarMass = 209;
		else if (strcmp(Symbol, "At") == 0)
			MolarMass = 210;
		else if (strcmp(Symbol, "Rn") == 0)
			MolarMass = 222;
		else if (strcmp(Symbol, "Fr") == 0)
			MolarMass = 223;
		else if (strcmp(Symbol, "Ra") == 0)
			MolarMass = 226;
		else if (strcmp(Symbol, "Ac") == 0)
			MolarMass = 227;
		else if (strcmp(Symbol, "Rf") == 0)
			MolarMass = 265;
		else if (strcmp(Symbol, "Db") == 0)
			MolarMass = 268;
		else if (strcmp(Symbol, "Sg") == 0)
			MolarMass = 271;
		else if (strcmp(Symbol, "Bh") == 0)
			MolarMass = 272;
		else if (strcmp(Symbol, "Hs") == 0)
			MolarMass = 270;
		else if (strcmp(Symbol, "Mt") == 0)
			MolarMass = 276;
		else if (strcmp(Symbol, "Ds") == 0)
			MolarMass = 281;
		else if (strcmp(Symbol, "Rg") == 0)
			MolarMass = 280;
		else if (strcmp(Symbol, "Cn") == 0)
			MolarMass = 285;
		else if (strcmp(Symbol, "Nh") == 0)
			MolarMass = 284;
		else if (strcmp(Symbol, "Fl") == 0)
			MolarMass = 289;
		else if (strcmp(Symbol, "Mc") == 0)
			MolarMass = 288;
		else if (strcmp(Symbol, "Lv") == 0)
			MolarMass = 293;
		else if (strcmp(Symbol, "Og") == 0)
			MolarMass = 294;
		else {
			printf("\nThat symbol is not understood.  Please run the programme again and enter a symbol from the periodic table (not including the Lanthanides and Actinides)\n");
			break;
		}

		printf("\nPlease enter the number of atoms of this element that are in the compound (according to formula)\n");
		scanf("%d", &NumberOfAtoms);

		printf("\n%s's molar mass is %f \n", Symbol, MolarMass); 
		TotalMass = TotalMass + MolarMass * NumberOfAtoms;
		printf("\nTotal mass is now %f \n", TotalMass);

	}
	printf("\nThe molar mass of the compound is %f g/mol.\n", TotalMass);
	printf("");

	return 0;
}








