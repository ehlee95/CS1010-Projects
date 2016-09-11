/**
 * CS1010 AY2016/7 Semester 1 Lab2 Ex1
 * candles.c
 * This program calculates the number of candles that can be burned when
 * residual wax can be made into a new candle.
 * Eric Lee
 * Tutorial 23
 */

#include <stdio.h>

int count_candles(int, int);

int main(void) {

	int numCandles, residual;

	printf("Enter number of candles and \n");
	printf("number of residuals to make a new candle: ");
	scanf("%d %d", &numCandles, &residual);					//get inputs

	printf("Total candles burnt = %d\n", 
	count_candles(numCandles, residual));

	return 0;
}

//The following function calculates the number of candles that can be
//burned, given positive integer inputs 'numCandles' and 'residual'

int count_candles(int numCandles, int residual) {

int burnCount = 0;

//This repetition loop below operates as long as there remain enough candles
//to generate a new one from residual wax

while(numCandles >= residual) {

	numCandles = (numCandles - residual + 1);
	burnCount = burnCount + residual;

}

burnCount = burnCount + numCandles;		//adds remaining candles

return burnCount;	

}

