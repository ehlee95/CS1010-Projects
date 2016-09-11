// Unit6_OddIntegers_v1.c
// List odd integers between 1 and n (provided by user)
// Version 1

#include <stdio.h>

void print_odd_integers(int);

int main(void) {    
	int num;

	printf("Enter a positive integer: ");
	scanf("%d", &num);
	print_odd_integers(num);

	return 0;
}

void print_odd_integers(int n) {
		
		int i;

		for (i=3; i<=n; i+=3)
		printf("%d ", i);

		printf("\n");
}

