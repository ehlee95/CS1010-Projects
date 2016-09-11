// primeTest.c
// To check if a number is prime.
#include <stdio.h>

int is_prime(int value);

int main(void) {    
	int value;

	printf("Enter a positive integer: ");
	scanf("%d", &value);

	if (is_prime(value)==1) 
		printf("%d is a prime.\n", value);
	else
		printf("%d is not a prime.\n", value);

	return 0;
}

// Write a description for this function,
// and fill in the precondition below.
// Precond:

int is_prime(int value) {

int divisor, prime; //if variable prime = 1, the number is prime

/*

if(value == 2){
	prime = 1;
}

else if(value == 3){
	prime = 1;
}

else if(value == 4){
	prime = 0;
}

else{
*/
	for (divisor = 2; divisor <= value - 1 ; divisor ++){

		if(value%divisor == 0) {
			prime = 0;
			break;
		}
	}

	if(divisor == value){
		prime = 1;
	}

return prime;

}
