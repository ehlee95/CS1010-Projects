// CS1010 AY2015/6 Semester 2 PE1 Ex1
//
// line.c
//
// Name: Eric Lee
// Matriculation number: E0025461
// Description: This program determines if two lines, represented by AB and
// CD, are parallel, intersecting, or overlapping.

#include <stdio.h>

float computeK(int, int, int, int);
int determineType(float, float, float);
int printMessage(int);

int main(void) {

int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, type; 
float slope1, slope2, slope3;

	printf("Enter the coordinates of A: ");	 
	scanf("%d %d", &Ax, &Ay);
	printf("Enter the coordinates of B: ");	
	scanf("%d %d", &Bx, &By);
	printf("Enter the coordinates of C: ");
	scanf("%d %d", &Cx, &Cy);
	printf("Enter the coordinates of D: ");
	scanf("%d %d", &Dx, &Dy);

	slope1 = computeK(Ax, Ay, Bx, By);
	slope2 = computeK(Cx, Cy, Dx, Dy);
	slope3 = computeK(Ax, Ay, Cx, Cy);

	type = determineType(slope1, slope2, slope3);

	printMessage(type);

	return 0;
}

float computeK(int Ax, int Ay, int Bx, int By) {

	float slope = ((float)By - Ay)/(Bx - Ax);
	
	return slope;
}

int determineType(float slope1, float slope2, float slope3) {

	int type;
	
	if(slope1 == slope2)
		if(slope1 == slope3)
			type = 3;
		else
			type = 1;
	else
		type = 2;

	return type;
}

int printMessage(int type) {

	if(type == 1)
		printf("The two lines are parallel.\n");
	else if(type == 2)
		printf("The two lines are intersecting.\n");
	else
		printf("The two lines are overlapping.\n");

	return 0;
}




