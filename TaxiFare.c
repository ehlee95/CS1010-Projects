// TaxiFare.c
// This program computes taxi fare.
#include <stdio.h>
#define INCREMENT 0.22

float computeFare(int, int, int);

int main(void) {    
	int dayType; // 0 = weekends and public holidays;
	             // 1 = weekdays and non public holidays
	int boardHour, boardMin; // hour and minute of boarding
	int boardTime;           // converted from boardHour and boardMin
	int distance;            // distance of journey

	printf("Day type: ");
	scanf("%d", &dayType);
	printf("Boarding hour and minute: ");
	scanf("%d %d", &boardHour, &boardMin);
	printf("Distance: ");
	scanf("%d", &distance);

	boardTime = boardHour*60 + boardMin;

	printf("Boarding time is %d minutes\n", boardTime);

	printf("Total taxi fare is $%.2f\n", 
	       computeFare(dayType, boardTime, distance));

	return 0;
}

//   Compute taxi fare based on
//   type: 0 = weekends and PH; 1 = weekdays
//   time: time passenger boarded taxi (in minutes from 0:00hr)
//   dist: distance of journey

float computeFare(int dayType, int boardTime, int distance) {

	float meteredFare, fare;  //declares the meteredFare variable

	if (distance<=1000){		//uses if else statement to capture
		meteredFare = 3.4;		//metered fare
	}

	else if (1000<distance && distance<=10200){
		meteredFare = 3.4 + INCREMENT*(((distance-1000)+399)/400);
	}

	else{
		meteredFare = 8.46 + INCREMENT*(((distance-10200)+349)/350);
	}

	if (dayType == 0){		//adds surcharge based on day type
		
		if (boardTime<=359){
			fare = 1.5 * meteredFare;
		}

		else if (boardTime>=360 && boardTime<=1079){
			fare = meteredFare;
		}

		else{
			fare = 1.25 * meteredFare;
		}
}

	else{

		if (boardTime<=359){
       	    fare = 1.5 * meteredFare;
		}
      
	  	else if (boardTime>=360 && boardTime<=569){
			fare = 1.25 * meteredFare;
		}

		else if (boardTime>=570 && boardTime <=1079){
			fare = meteredFare;
		}

 		else{
 			fare = 1.25 * meteredFare;
  		}
}

return fare;
}

