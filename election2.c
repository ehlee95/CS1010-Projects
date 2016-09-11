//This program determines the winner of a two-party election with an unfixed
//number of voting stations and an unfixed number of voters.

#include <stdio.h>
#include <math.h>

int printSummary(float, float);

int main(void) {
	
	//to avoid truncation, declare all variables as float
	float sampleCountA=0.0, sampleCountB=0.0;
	float stationSampleA, stationSampleB;	
	int numVoteA, numVoteB, numVoterDivision, numVoterStation, numStation, numInvalidVote, station;
	
	printf("Enter number of voters in the division: ");	
	scanf("%d", &numVoterDivision);

	printf("Enter number of stations: ");
	scanf("%d", &numStation);

	//repeats loop to update sample count for each station
	for (station = 1 ; station <= numStation ; station++) {

		printf("Enter number of voters in station: ");
		scanf("%d", &numVoterStation);

		printf("Enter number of votes for Team A: ");
		scanf("%d", &numVoteA);
	
		printf("Enter number of votes for Team B: ");
		scanf("%d", &numVoteB);
		
		numInvalidVote = 100 - numVoteA - numVoteB;
		
		stationSampleA = (numVoteA * numVoterStation)/((100 - numInvalidVote) * numVoterDivision);
		stationSampleB = (numVoteB * numVoterStation)/((100 - numInvalidVote) * numVoterDivision);
	
		sampleCountA = sampleCountA + stationSampleA;
		sampleCountB = sampleCountB + stationSampleB;

	}

printf("Sample count for Team A = %.2f%%\n",sampleCountA*100);
printf("Sample count for Team B = %.2f%%\n",sampleCountB*100);
printSummary(sampleCountA, sampleCountB);

return 0;

}

//selects and prints appropriate summary statement
int printSummary(float sampleCountA, float sampleCountB) {

float margin;

margin = fabs(sampleCountA - sampleCountB);

	if(margin == 0)
		printf("There is no winner in this election\n");
	else if(margin > 0 && margin < 0.05)
		if(sampleCountA > sampleCountB)
			printf("Team A narrowly wins this election.\n");
		else
			printf("Team B narrowly wins this election.\n");
	else if(margin >= 0.05 && margin <= 0.3)
		if(sampleCountA > sampleCountB)
			printf("Team A wins by a significant margin.\n");
		else
			printf("Team B wins by a significant margin.\n");
	else
		if(sampleCountA > sampleCountB)
			printf("Team A wins by a landslide.\n");
		else
			printf("Team B wins by a landslide.\n");

	return 0;
}

