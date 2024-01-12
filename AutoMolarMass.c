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
		scanf("%s", &Symbol);
		printf("\nPlease enter the number of atoms of this element that are in the compound (according to formula)\n");
		scanf("%d", &NumberOfAtoms);
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
		else if (Symbol == "N")
			MolarMass = 14.01;
		else if (strcmp(Symbol, "O") == 0)
			MolarMass = 16.00;
		else if (Symbol  == "F")
			MolarMass = 19.00;
		else if (Symbol == "Ne")
			MolarMass = 20.18;
		else if (Symbol == "Na")
			MolarMass = 22.99;
		else if (Symbol == "Mg")
			MolarMass = 24.31;
		else if (Symbol == "Al")
			MolarMass = 26.98;
		else if (Symbol == "Si")
			MolarMass = 28.09;
		else if (Symbol == "P")
			MolarMass = 30.97;
		else if (Symbol == "S")
			MolarMass = 32.07;
		else if (Symbol == "Cl")
			MolarMass = 35.45;
		else if (Symbol == "Ar")
			MolarMass = 39.95;
		else if (Symbol == "K")
			MolarMass = 39.10;
		else if (Symbol == "Ca")
			MolarMass = 40.08;
		else if (Symbol == "Sc")
			MolarMass = 44.96;
		else if (Symbol == "Ti")
			MolarMass = 47.87;
		else if (Symbol == "V")
			MolarMass = 50.94;
		else if (Symbol == "Cr")
			MolarMass = 51.99;
		else if (Symbol == "Mn")
			MolarMass = 54.94;
		else if (Symbol == "Fe")
			MolarMass = 55.85;
		else if (Symbol == "Co")
			MolarMass = 58.93;
		else if (Symbol == "Ni")
			MolarMass = 58.69;
		else if (Symbol == "Cu")
			MolarMass = 63.55;
		else if (Symbol == "Zn")
			MolarMass = 65.38;
		else if (Symbol == "Ga")
			MolarMass = 69.72;
		else if (Symbol == "Ge")
			MolarMass = 72.64;
		else if (Symbol == "As")
			MolarMass = 74.92;
		else if (Symbol == "Se")
			MolarMass = 78.96;
		else if (Symbol == "Br")
			MolarMass = 79.90;
		else if (Symbol == "Kr")
			MolarMass = 83.80;
		else if (Symbol == "Rb")
			MolarMass = 85.47;
		else if (Symbol == "Sr")
			MolarMass = 87.62;
		else if (Symbol == "Y")
			MolarMass = 88.91;
		else if (Symbol == "Zr")
			MolarMass = 91.22;
		else if (Symbol == "Nb")
			MolarMass = 92.91;
		else if (Symbol == "Mo")
			MolarMass = 95.96;
		else if (Symbol == "Tc")
			MolarMass = 98;
		else if (Symbol == "Ru")
			MolarMass = 101.07;
		else if (Symbol == "Rh")
			MolarMass = 102.91;
		else if (Symbol == "Pd")
			MolarMass = 106.42;
		else if (Symbol == "Ag")
			MolarMass = 107.87;
		else if (Symbol == "Cd")
			MolarMass = 112.41;
		else if (Symbol == "In")
			MolarMass = 114.82;
		else if (Symbol == "Sn")
			MolarMass = 118.71;
		else if (Symbol == "Sb")
			MolarMass = 121.76;
		else if (Symbol == "Te")
			MolarMass = 127.6;
		else if (Symbol == "I")
			MolarMass = 126.91;
		else if (Symbol == "Xe")
			MolarMass = 131.29;
		else if (Symbol == "Cd")
			MolarMass = 112.41;
		else if (Symbol == "In")
			MolarMass = 114.82;
		else if (Symbol == "Sn")
			MolarMass = 118.71;
		else if (Symbol == "Sb")
			MolarMass = 212.76;
		else if (Symbol == "Te")
			MolarMass = 127.6;
		else if (Symbol == "I")
			MolarMass = 126.90;
		else if (Symbol == "Xe")
			MolarMass = 131.29;
		else if (Symbol == "Cs")
			MolarMass = 132.91;
		else if (Symbol == "Ba")
			MolarMass = 137.33;
		else if (Symbol == "La")
			MolarMass = 138.91;
		else if (Symbol == "Hf")
			MolarMass = 178.49;
		else if (Symbol == "Ta")
			MolarMass = 180.85;
		else if (Symbol == "W")
			MolarMass = 183.84;
		else if (Symbol == "Re")
			MolarMass = 186.21;
		else if (Symbol == "Os")
			MolarMass = 190.23;
		else if (Symbol == "Ir")
			MolarMass = 192.22;
		else if (Symbol == "Pt")
			MolarMass = 195.08;
		else if (Symbol == "Au")
			MolarMass = 196.97;
		else if (Symbol == "Hg")
			MolarMass = 200.59;
		else if (Symbol == "Tl")
			MolarMass = 204.38;
		else if (Symbol == "Pb")
			MolarMass = 207.2;
		else if (Symbol == "Bi")
			MolarMass = 208.98;
		else if (Symbol == "Po")
			MolarMass = 209;
		else if (Symbol == "At")
			MolarMass = 210;
		else if (Symbol == "Rn")
			MolarMass = 222;
		else if (Symbol == "Fr")
			MolarMass = 223;
		else if (Symbol == "Ra")
			MolarMass = 226;
		else if (Symbol == "Ac")
			MolarMass = 227;
		else if (Symbol == "Rf")
			MolarMass = 265;
		else if (Symbol == "Db")
			MolarMass = 268;
		else if (Symbol == "Sg")
			MolarMass = 271;
		else if (Symbol == "Bh")
			MolarMass = 272;
		else if (Symbol == "Hs")
			MolarMass = 270;
		else if (Symbol == "Mt")
			MolarMass = 276;
		else if (Symbol == "Ds")
			MolarMass = 281;
		else if (Symbol == "Rg")
			MolarMass = 280;
		else if (Symbol == "Cn")
			MolarMass = 285;
		else if (Symbol == "Nh")
			MolarMass = 284;
		else if (Symbol == "Fl")
			MolarMass = 289;
		else if (Symbol == "Mc")
			MolarMass = 288;
		else if (Symbol == "Lv")
			MolarMass = 293;
		else if (Symbol == "Og")
			MolarMass = 294;

		printf("\n%s's molar mass is %f \n", Symbol, MolarMass); 
		TotalMass = TotalMass + MolarMass * NumberOfAtoms;
		printf("\nTotal mass is now %f \n", TotalMass);

	}
	printf("\nThe molar mass of the compound is %f g/mol.\n", TotalMass);
	printf("");

	return 0;
}








