
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

	int COINS, Toonies, A, B, C, D, E, r1, r2, r3, r4, r5;
	double Loonies, Quarters, Dimes, Nickels, Pennies, coin, coins, fees, dollars, t, a, b, c, d, e;
	double rT = 0, rL= 0, rQ = 0, rD = 0,  rN = 0, rP = 0; 

	printf("Change Maker Machine\n"); // Title
	printf("====================\n"); // Underline
	printf("Enter dollars and cents amount to convert to coins: $"); // phrase listed
	scanf("%lf", &dollars); // users input for how much

	coin = dollars * 100; // Conversion
	fees = coin * 0.05;
	coins = coin - fees;

	printf("Service fee (5.0 percent): %.2lf", fees / 100); // Input for Fee
	printf("\nBalance to dispense: $%.2lf\n", coins / 100);

	Toonies = coins / 200; // Calculation for Toonies
	COINS = (int)coins;
	rT = COINS % 200;
	t = rT / 100;
	printf("\n$2.00 Toonies  X %d", Toonies);
	printf(" (remaining: $%.2lf)", t);

	Loonies = rT / 100; // Calculation for Loonies
	A = (int)Loonies;
	r1 = (int)rT;
	rL= r1 % 100;
	a = rL / 100;
	printf("\n$1.00 Loonies  X %d", A);
	printf(" (remaining: $%.2lf)", a);

	Quarters = rL / 25; // Calculation for Quarters
	B = (int)Quarters;
	r2 = (int)rL;
	rQ = r2 % 25;
	b = rQ / 100;
	printf("\n$0.25 Quarters X %d", B);
	printf(" (remaining: $%.2lf)", b);

	Dimes = rQ / 10; // Calculation for Dimes
	C = (int)Dimes;
	r3 = (int)rQ;
	rD = r3 % 10; 
	c = rD / 100;
	printf("\n$0.10 Dimes    X %d", C);
	printf(" (remaining: $%.2lf)", c);

	Nickels = rD / 5; // Calculation for Nickels
	D = (int)Nickels;
	r4 = (int)rD;
	rN = r4 % 5;
	d = rN / 100;
	printf("\n$0.05 Nickels  X %d", D);
	printf(" (remaining: $%.2lf)", d);

	Pennies = rN / 1; // Calculation for Pennies
	E = (int)Pennies;
	r5 = (int)rN;
	rP = r5 % 1; 
	e = rP / 100;
	printf("\n$0.01 Pennies  X %d", E);
	printf(" (remaining: $%.2lf)\n", e);

	printf("\nAll coins dispensed!"); // DONE!
	printf("\n");

	return 0;

}
