// Suffix.c
// This program reads a positive integer and 
// prints the value with the correct ordinal suffix.
#include <stdio.h>

void printSuffix(int);

int main(void) {    
	int value;

	printf("Enter value: ");
	scanf("%d", &value);

	printf("%d", value);
	printSuffix(value);

	return 0;
}

// This function prints the corresponding 
// ordinal suffix for value.

void printSuffix(int value) {

	int lastDigit, suffix;		//if suffix = 1, print 'st'
								//if suffix = 2, print 'nd'
	lastDigit = value%10;		//if suffix = 3, print 'rd'
								//if suffix = 4, print 'th'
	switch(lastDigit) {

	case 1:
		if(value%100 == 11){
			suffix = 4;
		}
		else{
			suffix = 1;
		}
		break;
	case 2:
		if(value%100 == 12){
			suffix = 4;
		}
		else{
			suffix = 2;
		}
		break;
	case 3:
		if(value%100 == 13){
			suffix = 4;
		}
		else{
			suffix = 3;
		}
		break;
	case 4:
		suffix = 4;
		break;
	case 5:
		suffix = 4;
		break;
	case 6:
		suffix = 4;
		break;
	case 7:
		suffix = 4;
		break;
	case 8:
		suffix = 4;
		break;
	case 9:
		suffix = 4;
		break;
	case 0:
		suffix = 4;
		break;
}

	if(suffix == 1){
		printf("st\n");
	}

	else if(suffix == 2){
		printf("nd\n");
	}

	else if(suffix == 3){
		printf("rd\n");
	}

	else{
		printf("th\n");
	}

}
