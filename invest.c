/**
 * CS1010 AY2016/17 Semester 1 Lab1 Ex1
 * invest.c
 * This program calculates the final amount given principal amount,
 * interest rate, and number of years, based on compound interest.
 * Eric Lee
 * Tutorial 23
 */

#include <stdio.h>
#include <math.h>

int main(void) {

	int principal, numYears;
	float money, rate;

	printf("Enter principal amount: ");		//requests inputs
	scanf("%d", &principal);

	printf("Enter interest rate   : ");
	scanf("%f", &rate);

	printf("Enter number of years : ");
	scanf("%d", &numYears);

	money = (principal * (1 - pow(rate/100,numYears+1)))/(1 - rate/100);

	printf ("Amount = $%.2f\n", money);		//prints amount

	return 0;

}


