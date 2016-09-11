// AscendingDigits.c
// This program reads 3 positive integers and outputs "Yes" if
// the hundreds digits are in ascending order, or "No" otherwise.
#include <stdio.h>

int isAscending(int, int, int);

int main(void) {    

	int value1, value2, value3; //declares int variables for 3 input values
	
	printf("Enter 3 positive integers: "); //prompts user for inputs
	scanf("%d %d %d", &value1, &value2, &value3);
	printf("The integers are %d, %d and %d\n", value1, value2, value3);

	if(isAscending(value1, value2, value3) == 1){
		printf("Yes\n");
	}

	else{
		printf("No\n");
	}

	return 0;
}

// This function returns 1 if the digits at the hundredth position
// of the 3 parameters are in ascending order, or 0 otherwise.
int isAscending(int value1, int value2, int value3) {

	int digit1, digit2, digit3, trunc1, trunc2, trunc3;

	trunc1 = value1/100;
	digit1 = trunc1%10;

	trunc2 = value2/100;
	digit2 = trunc2%10;

	trunc3 = value3/100;
	digit3 = trunc3%10;

	if (digit3>digit1 && digit2>digit1){
		return 1;
	}

	else{
		return 0;
	}
}
