/* CS1010 AT2016 Sem1 Practice S02P02
 *This program generates a 'magic number' by adding the 1st, 3rd, and 5th
 *digits of an integer up to 5 digits
 *Eric Lee
 *Tutorial section 23
 */

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

	int integer, digit1, digit2, digit3, truncate1, truncate2, sumofdigits, magic;

	scanf("%d", &integer);	//stores value submitted by user

	digit1 = integer%10;	/*first digit can be found using a simple
													modulo operation*/
	truncate1 = integer/100;	//truncates remainder
	
	digit2 = truncate1%10;		//records second digit
	
	truncate2 = integer/10000;	//truncates remainder

	digit3 = truncate2%10;		//records third digit

	sumofdigits = digit1 + digit2 + digit3;

	magic = sumofdigits%10;

	printf("Magic number = %d\n", magic);

}
	
