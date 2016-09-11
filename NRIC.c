// NRIC.c
// This program computes NRIC check code.
#include <stdio.h>

char generateCode(int);
int compute_number();
int number, codeNumber;

int main(void) {    

	char code;

	printf("Enter 7-digit NRIC number: ");
	scanf("%d", &number);

	compute_number(number);
	code = generateCode(codeNumber);

	printf("Check code is %c\n", code);

	return 0;
}

// This function computes the number corresponding to check codes

int compute_number() {

	int weightedSum, digit1, digit2, digit2a, digit3, digit3a, digit4, digit4a, digit5, digit5a, digit6, digit6a, digit7;

	digit7 = number%10;
	digit6a = number/10;
	digit6 = digit6a%10;
	digit5a = number/100;
	digit5 = digit5a%10;
	digit4a = number/1000;
	digit4 = digit4a%10;
	digit3a = number/10000;
	digit3 = digit3a%10;
	digit2a = number/100000;
	digit2 = digit2a%10;
	digit1 = number/1000000;

	weightedSum = digit1*2 + digit2*7 + digit3*6 + digit4*5 + digit5*4 + digit6*3 + digit7*2;

	codeNumber = 11 - weightedSum%11;

	return 0;

}

// This function generates the check code for NRIC num
char generateCode(int codeNumber) {
	
	char code;

	switch(codeNumber) {
		case 1:
			code = 'A';
			break;
		case 2:
			code = 'B';
			break;
		case 3:
			code = 'C';
			break;
		case 4:
			code = 'D';
			break;
		case 5:
			code = 'E';
			break;
		case 6:
			code = 'F';
			break;
		case 7:
			code = 'G';
			break;
		case 8:
			code = 'H';
			break;
		case 9:
			code = 'I';
			break;
		case 10:
			code = 'Z';
			break;
		case 11:
			code = 'J';
			break;
		default:
			printf("\nInvalid NRIC\n");
	
	}
	
	return code;
}
