/* -----------------------------------------------------------------------
 * unittest1.c - getCost() - verify expected cost
 * for each of the 27 cards
 * -----------------------------------------------------------------------
 */

#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"


int main() {
    int cardNumTotal = 27;
    int card;
	int cost;
	int pass = 0;
	
 	printf ("--- TESTING getCost(): ---\n");
	
	for(card = 0; card < cardNumTotal; card++)
	{
		cost = getCost(card);
	
		if(card == 0)			
		{
			if (cost == 0){
				printf("\nPassed: Curse cost = %d, expected = 0\n", cost);
				pass++;}
			else
				printf("\nFailed: Curse cost = %d, expected = 0\n", cost); 
		}
		else if (card == 1)	
		{
			if (cost == 2){
				printf("\nPassed: Estate cost = %d, expected = 2\n", cost);
				pass++;}
			else
				printf("\nFailed: Estate cost = %d, expected = 2\n", cost); 
		}
		else if (card == 2)	
		{
			if (cost == 5){
				printf("\nPassed: Duchy cost = %d, expected = 5\n", cost);
				pass++;}
			else
				printf("\nFailed: Duchy cost = %d, expected = 5\n", cost); 
		}
		else if (card == 3)	
		{
			if (cost == 8){
				printf("\nPassed: Province cost = %d, expected = 2\n", cost);
				pass++;}
			else
				printf("\nFailed: Province cost = %d, expected = 2\n", cost); 
		}
		else if (card == 4)	
		{
			if (cost == 0){
				printf("\nPassed: Copper cost = %d, expected = 0\n", cost);
				pass++;}
			else
				printf("\nFailed: Copper cost = %d, expected = 0\n", cost); 
		}
		else if (card == 5)	
		{
			if (cost == 3){
				printf("\nPassed: Silver cost = %d, expected = 3\n", cost);
				pass++;}
			else
				printf("\nFailed: Silver cost = %d, expected = 3\n", cost); 
		}
		else if (card == 6)	
		{
			if (cost == 6){
				printf("\nPassed: Gold cost = %d, expected = 6\n", cost);
				pass++;}
			else
				printf("\nFailed: Gold cost = %d, expected = 6\n", cost); 
		}
		else if (card == 7)	
		{
			if (cost == 6){
				printf("\nPassed: Adventurer cost = %d, expected = 6\n", cost);
				pass++;}
			else
				printf("\nFailed: Adventurer cost = %d, expected = 6\n", cost); 
		}
		else if (card == 8)	
		{
			if (cost == 5){
				printf("\nPassed: Council Room cost = %d, expected = 5\n", cost);
				pass++;}
			else
				printf("\nFailed: Council Room cost = %d, expected = 5\n", cost); 
		}
		else if (card == 9)	
		{
			if (cost == 4){
				printf("\nPassed: Feast cost = %d, expected = 4\n", cost);
				pass++;}
			else
				printf("\nFailed: Feast cost = %d, expected = 4\n", cost); 
		}
		else if (card == 10)	
		{
			if (cost == 4){
				printf("\nPassed: Gardens cost = %d, expected = 4\n", cost);
				pass++;}
			else
				printf("\nFailed: Gardens cost = %d, expected = 4\n", cost); 
		}
		else if (card == 11)	
		{
			if (cost == 5){
				printf("\nPassed: Mine cost = %d, expected = 5\n", cost);
				pass++;}
			else
				printf("\nFailed: Mine cost = %d, expected = 5\n", cost); 
		}
		else if (card == 12)	
		{
			if (cost == 4){
				printf("\nPassed: Remodel cost = %d, expected = 4\n", cost);
				pass++;}
			else
				printf("\nFailed: Remodel cost = %d, expected = 4\n", cost); 
		}
		else if (card == 13)	
		{
			if (cost == 4){
				printf("\nPassed: Smithy cost = %d, expected = 4\n", cost);
				pass++;}
			else
				printf("\nFailed: Smith cost = %d, expected = 4\n", cost); 
		}
		else if (card == 14)	
		{
			if (cost == 3){
				printf("\nPassed: Village cost = %d, expected = 3\n", cost);
				pass++;}
			else
				printf("\nFailed: Village cost = %d, expected = 3\n", cost); 
		}
		else if (card == 15)	
		{
			if (cost == 4){
				printf("\nPassed: Baron cost = %d, expected = 4\n", cost);
				pass++;}
			else
				printf("\nFailed: Baron cost = %d, expected = 4\n", cost); 
		}
		else if (card == 16)	
		{
			if (cost == 3){
				printf("\nPassed: Great Hall cost = %d, expected = 3\n", cost);
				pass++;}
			else
				printf("\nFailed: Great Hall cost = %d, expected = 3\n", cost); 
		}
		else if (card == 17)	
		{
			if (cost == 5){
				printf("\nPassed: Minion cost = %d, expected = 5\n", cost);
				pass++;}
			else
				printf("\nFailed: Minion cost = %d, expected = 5\n", cost); 
		}
		else if (card == 18)	
		{
			if (cost == 3){
				printf("\nPassed: Steward cost = %d, expected = 3\n", cost);
				pass++;}
			else
				printf("\nFailed: Steward cost = %d, expected = 3\n", cost); 
		}
		else if (card == 19)	
		{
			if (cost == 5){
				printf("\nPassed: Tribute cost = %d, expected = 5\n", cost);
				pass++;}
			else
				printf("\nFailed: Tribute cost = %d, expected = 5\n", cost); 
		}
		else if (card == 20)	
		{
			if (cost == 3){
				printf("\nPassed: Ambassador cost = %d, expected = 3\n", cost);
				pass++;}
			else
				printf("\nFailed: Ambassador cost = %d, expected = 3\n", cost); 
		}
		else if (card == 21)	
		{
			if (cost == 4){
				printf("\nPassed: Cutpurse cost = %d, expected = 4\n", cost);
				pass++;}
			else
				printf("\nFailed: Cutpurse cost = %d, expected = 4\n", cost); 
		}
		else if (card == 22)	
		{
			if (cost == 2){
				printf("\nPassed: Embargo cost = %d, expected = 2\n", cost);
				pass++;}
			else
				printf("\nFailed: Embargo cost = %d, expected = 2\n", cost); 
		}
		else if (card == 23)	
		{
			if (cost == 5){
				printf("\nPassed: Outpost cost = %d, expected = 5\n", cost);
				pass++;}
			else
				printf("\nFailed: Outpost cost = %d, expected = 5\n", cost); 
		}
		else if (card == 24)	
		{
			if (cost == 4){
				printf("\nPassed: Salvager cost = %d, expected = 4\n", cost);
				pass++;}
			else
				printf("\nFailed: Salvager cost = %d, expected = 4\n", cost); 
		}
		else if (card == 25)	
		{
			if (cost == 4){
				printf("\nPassed: Sea Hag cost = %d, expected = 4\n", cost);
				pass++;}
			else
				printf("\nFailed: Sea Hag cost = %d, expected = 4\n", cost); 
		}
		else if (card == 26)	
		{
			if (cost == 4){
				printf("\nPassed: Treasure Map cost = %d, expected = 4\n", cost);
				pass++;}
			else
				printf("\nFailed: Treasure Map cost = %d, expected = 4\n", cost); 
		}
	}
	
	printf("\n--- getCost Results: %d out of %d cards passed ---\n", pass, cardNumTotal);

    return 0;
}
