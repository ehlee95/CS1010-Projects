#include <stdio.h>

int main(void) {

	int value, count;

	printf("Enter value: \n");
	scanf("%d", &value);

	if(value%2 == 0) {

	for (count = 1; count <= 15; count ++){

		printf("The count is %d\n", count);

		}
	}

	else {
	
		printf("The value is odd\n");

		}

return 0;

}
