// validate.c
// To read age from user, until the 
// age entered is valid (1 - 100).
#include <stdio.h>

int main(void) {    

	int age;
	int valid = 0;
	int attempts = 1;

	//printf("Enter age: ");
	//scanf("%d", &age);

	while(valid == 0) {

		printf("Enter age: ");
		scanf("%d", &age);
		
		if(age >= 1 && age <= 100) {
			valid = 1;
		}

		else {
			attempts++;
			valid = 0; //potentially remove?
		}

	}

	if(valid == 1) {

		printf("Your age is %d.\n", age);
		printf("Number of attempts = %d\n", attempts);
	
	return 0;
	}
}
