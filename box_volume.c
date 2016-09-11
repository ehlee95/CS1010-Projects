/* CS1010 AT2016/17 Sem1 Lab0 Ex1
*box_volume.c
*This program calculates the volume of a box
*Eric Lee
*Tutorial section 21
*/

#include <stdio.h>

	int main(void) 
	
	{

		int length, width, height, volume;

		printf("Enter length: ");	//prompts user for inputs
		scanf("%i", &length);

		printf("Enter width : ");
		scanf("%i", &width);

		printf("Enter height: ");
		scanf("%i", &height);

		volume = length * width * height;  //calculates volume

		printf("Volume = %i\n", volume);	//prints result

		return (0);
	}
