/*
 * CS1010 AY2016/7 Semester 1 Lab2 Ex2
 * square_free.c
 * Eric Lee
 * Tutorial 23
 * This program calculates the number of square free numbers contained in
 * two ranges, then reports which range contains more square free numbers.
 */

#include <stdio.h>

int range_count(int, int);
int num_squarefree(int);

	int main(void) {
				
	int lower1, upper1, lower2, upper2, range1, range2;
	
	//get inputs
	printf("Enter four positive integers: ");
	scanf("%d %d %d %d", &lower1, &upper1, &lower2, &upper2);

	//calculate square free numbers in each range
	range1 = range_count(lower1, upper1);
	range2 = range_count(lower2, upper2);

	//select and print result
	if(range1 == range2) {
		printf("Both ranges have the same number of square-free numbers:"
		" %d\n", range1); 
	}

	else if(range1 > range2) {
		printf("Range [%d, %d] has more square-free numbers: %d\n",
		lower1, upper1, range1);
	}

	else {
		printf("Range [%d, %d] has more square-free numbers: %d\n", 
		lower2, upper2, range2);
	}
	
	return 0;
}

//function determines number of square free values in a range [int, int]
int range_count(int lower, int upper) {

	int number, squareCount = 0;

	for(number = lower ; number <= upper ; number++) {
		
		if(num_squarefree(number)==1)
			squareCount++;
		else
			squareCount = squareCount;
		
		}

	return squareCount;
}

//function determines if an input int is square free
int num_squarefree(int number) {

	int i, divisor;
	int isSquareFree = 1;

	for(i = 2 ; i < number ; i++) {
			
		divisor = i;

		if(number%(divisor*divisor) == 0) {
			isSquareFree = 0;
			break;
		}
		else
			divisor++;
			isSquareFree = 1;
	}

	return isSquareFree;
}

