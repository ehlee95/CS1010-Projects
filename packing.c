/*S1010 AY2016/7 Semester 1 Lab1 Ex3
 * packing.c
 * This program calculates the maximum number of slabs that will fit in a
 * tray based on slab orientation and the dimensions of the slabs and tray
 * Eric Lee
 * Tutorial 23
 */

#include <stdio.h>

//declares 'compute' function and global variable 'max_slab'
void compute_max_slabs();
int max_slabs;

int main(void) {
	
	//prompts user for tray dimensions
	printf("Enter dimension of tray: ");

	//prompts user for slab dimensions
	printf("Enter dimension of slab: ");

	//uses compute_max_slabs function to determine optimal slab count
	compute_max_slabs();

	//prints result
	printf("Maximum number of slabs = %d\n", max_slabs);

	return 0;

}

void compute_max_slabs() {

	//declare input and output variables
	int trayHeight, trayWidth, slabHeight, slabWidth; 

	//records tray and slab dimensions
	scanf("%d %d %d %d", &trayHeight, &trayWidth, &slabHeight, &slabWidth);

	//declares variables to count max slabs in each orientation
	int slabCountVertical = (trayHeight/slabHeight)*(trayWidth/slabWidth);

	int slabCountHorizontal = (trayHeight/slabWidth)*(trayWidth/slabHeight);

	//selects highest count
	if(slabCountVertical > slabCountHorizontal)
		max_slabs = slabCountVertical;

	if(slabCountHorizontal > slabCountVertical)
		max_slabs = slabCountHorizontal;

	if(slabCountHorizontal == slabCountVertical)
		max_slabs = slabCountHorizontal;

}
