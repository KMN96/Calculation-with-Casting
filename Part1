
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

	int Toonies, Loonies, Quarters; // types of coins
	double dollars, rT, rL, rQ; // 

	printf("Change Maker Machine\n"); // Title
	printf("====================\n"); // Underline
	printf("Enter dollars and cents amount to convert to coins: $"); // phrase listed
	scanf("%lf", &dollars); // users input for how much
	printf("\n");

	Toonies = dollars / 2.00; // Calculation for Toonies
	rT = dollars - (Toonies * 2); // Remainder for Toonies
	Loonies = rT / 1.00; // Calculation for Loonies
	rL = rT - (Loonies * 1); // Remainder for Loonies
	Quarters = rL / 0.25; // Calculation for Quarters
	rQ = rL - (Quarters * 0.25); // Remainder for Quarters

	printf("$2.00 Toonies  X %d", Toonies); // Creating the cart shown in instructions
	printf(" (remaining: $%.2lf)\n", rT);
	printf("$1.00 Loonies  X %d", Loonies);
	printf(" (remaining: $%.2lf)\n", rL);
	printf("$0.25 Quarters X %d", Quarters);
	printf(" (remaining: $%.2lf)\n", rQ);
	printf("\nMachine error! Thank you for letting me keep $%.2lf!", rQ);
	printf("\n");
	return 0;

}
