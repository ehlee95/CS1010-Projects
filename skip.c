#include <stdio.h>

int skipCount(int, int, int);
int oddCount(int);

int main(void){
	int startPos, endPos, lower, upper;
	
	// Insert appropriate statements for reading the inputs.
	printf("Enter starting postion: \n");
	printf("Enter lower bound and upper bound: \n");
	scanf("%d %d %d", &startPos, &lower, &upper);

	endPos = skipCount(startPos, lower, upper);
	
	printf("The ending position is %d.\n", endPos);
	
	return 0;
}

int skipCount(int startPos, int lower, int upper){
	
	int count, position;

	position = startPos;

	for(count = lower ; count <= upper ; count ++) {
		position = position + 1 + oddCount(count);
//		printf("Position is: %d\n", position);
	}

	position = position%5;
	
	return position;
}

int oddCount(int count) {

	int numOdd = 0;

	while(count > 0) {
	
		if(count%2 == 1)
			numOdd++;
	
		count = count/10;
	}
//	printf("%d %d\n", count, numOdd);
	return numOdd;

}
