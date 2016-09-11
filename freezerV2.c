
/* 	Eric Lee
 *  Unit 3 Exercise 6: Estimate temperature in a freezer
 *  given the elapsed time since power failure.
 *  New formula: T = (4*t^10 / (t^9+2)) - 20
 */
#include <stdio.h>
#include <math.h>

	int main(void) {
	int hours;
	float minutes, temperature, time;  // Temperature in freezer

	// Get the hours and minutes
	printf("Enter hours and minutes since power failure: ");
	scanf("%d %f", &hours, &minutes);

	time = hours + minutes/60;
	
	temperature = ((4 * pow(time,10))/(pow(time,9)+2))-20;

	printf("Temperature in freezer = %.2f\n", temperature);

	return 0;
}
