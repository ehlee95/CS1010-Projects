#include <stdio.h>

void get_magic();

int main(void) {

printf("Enter 1st value: "); //prompts for first value
get_magic();

printf("Enter 2nd value: "); //prompts for second value
get_magic();

return 0;

}

void get_magic() {

	int integer, digit1, digit2, digit3, remainder1, remainder2, sumofdigits, magic;

	scanf("%d", &integer);	//stores value submitted by user

	digit1 = integer%10;	/*first digit can be found using a simple
													modulo operation*/
	remainder1 = integer%100;
	
	digit2 = (integer%1000 - remainder1)/100;
	
	remainder2 = integer%10000;					

	digit3 = (integer - remainder2)/10000;

	sumofdigits = digit1 + digit2 + digit3;

	magic = sumofdigits%10;

	printf("Magic number = %d\n", magic);

}
	
