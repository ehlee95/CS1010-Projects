#include <stdio.h>

int main(void) {

	int integer, result;

	printf ("Enter integer: ");
	scanf ("%d", &integer);
	
	result = integer/100;

	printf ("%d\n", result);

	return 0;

}
