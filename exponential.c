#include <stdio.h>
#include <math.h>

int main(void)

{
	int integer, power, out;			//creates integer variables

	printf("What integer would you like exponentiated?: ");  //query, number to be exponentiated
	scanf("%d", &integer);

	printf("To what power would you like this integer exponentiated?: ");
	scanf("%d", &power);

	out = pow(integer, power);

	printf("Your answer is %d\n", out);

	return 0;

}

