#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	
	int i;

	srand(time(NULL));

	for (i = 1; i <= 100; i++)
		printf("%d\n", rand()%120 + 1);

	return 0;
}

