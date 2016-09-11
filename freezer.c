 /*  
  *  Eric Lee
  *  freezer.c
  *  Unit 3 Exercise 5: Estimate temperature in a freezer
  *  given the elapsed time since power failure.
  *  Formula: T = (4*t^2 / (t+2)) - 20
  */
#include <stdio.h>

	int main(void) {
	int hours;
	float time, minutes, temperature;

	// Get the hours and minutes
	printf("Enter hours and minutes since power failure: ");
	scanf("%d %f", &hours, &minutes);

	time = hours + minutes/60;
	
	temperature = (4 * time * time / ( time + 2 )) - 20;

	printf("Temperature in freezer = %.2f\n", temperature);

		return 0;
   }


