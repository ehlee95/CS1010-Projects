/* CS1010 AY2016/7 Semester 1 Lab1 Ex2
 * box.c
 * This program calculates the surface area and diagonal of a box
 * Eric Lee
 * Tutorial 23
 */




#include <stdio.h>
#include <math.h>

int main(void) {

	int height, width, length, surface;		//declares int variables
	float diagonal;							//declares float variables

	printf("Enter length: ");				//prompts user for length
	scanf("%d", &length);

	printf("Enter width : ");				//prompts user for width
	scanf("%d", &width);

	printf("Enter height: ");				//prmpts user for height
	scanf("%d", &height);
											//arithmetic
	surface = 2 * height * length + 2 * length * width + 2 * width * height;
	diagonal = sqrt(height * height + width * width + length * length);

	printf("Surface area = %d\n", surface);		//prints results
	printf("Diagonal = %.2f\n", diagonal);

	return 0;

}

