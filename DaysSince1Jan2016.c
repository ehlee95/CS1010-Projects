// DaysSince1Jan2016.c
// This program reads the day and month of 2016 and computes
// the number of days since 1st January 2016.
#include <stdio.h>

int computeDays(int, int);

int main(void) {    
	int day, month;

	printf("Enter day and month: ");
	scanf("%d %d", &day, &month);

	printf("Day %d of month %d is the %dth day of 2016.\n", 
	       day, month, computeDays(day, month));

	return 0;
}

// This function computes the number of days that have elapsed 
// for the given day and month since 1st January 2016.
int computeDays(int day, int month) {

	int dayCount;

	switch(month) {
		case 1:
			dayCount = day;
			break;
		case 2:
			dayCount = 31 + day;
			break;
		case 3:
			dayCount = 60 + day;
			break;
		case 4:
			dayCount = 91 + day;
			break;
		case 5:
			dayCount = 121 + day;
			break;
		case 6:
			dayCount = 152 + day;
			break;
		case 7:
			dayCount = 182 + day;
			break;
		case 8:
			dayCount = 213 + day;
			break;
		case 9:
			dayCount = 244 + day;
			break;
		case 10:
			dayCount = 274 + day;
			break;
		case 11:
			dayCount = 305 + day;
			break;
		case 12:
			dayCount = 335 + day;
			break;
		default:
			printf("Invalid date\n");
	}

	return dayCount;
}


