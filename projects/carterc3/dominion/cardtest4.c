/*
 * cardtest4.c - VILLAGE
 *
 */

#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"
#include <stdlib.h>

#define TESTCARD "village"

int main() {
    int newCards = 0;
    int discarded = 1;
	
    int i, j, m;
    int handpos = 0, choice1 = 0, choice2 = 0, choice3 = 0, bonus = 0;
    int remove1, remove2;
    int seed = 1000;
    int numPlayers = 2;
    int thisPlayer = 0;
	struct gameState G, testG;
	int k[10] = {adventurer, embargo, village, minion, mine, cutpurse,
			sea_hag, tribute, smithy, council_room};
			


	// initialize a game state and player cards
	initializeGame(numPlayers, k, seed, &G);

	printf("----------------- Testing Card: %s ----------------\n", TESTCARD);

	// ----------- Testing s --------------
	printf("TEST: draw 1 card and discard\n");

	// copy the game state to a test case
	memcpy(&testG, &G, sizeof(struct gameState));
	//hand setup
	testG.hand[thisPlayer][0] = estate;
	testG.hand[thisPlayer][1] = feast;
	testG.hand[thisPlayer][2] = duchy;
	testG.hand[thisPlayer][3] = village;
	testG.hand[thisPlayer][4] = copper;
	
	handpos = 3;
	
	cardEffect(village, choice1, choice2, choice3, &testG, handpos, &bonus);
	newCards = 1;

	if (testG.handCount[thisPlayer] == G.handCount[thisPlayer + newCards - discarded])
		printf("Passed: hand count = %d, expected = %d", testG.handCount[thisPlayer], G.handCount[thisPlayer] + newCards - discarded);
	else
		printf("Failed: hand count = %d, expected = %d", testG.handCount[thisPlayer], G.handCount[thisPlayer] + newCards - discarded);
	
	printf("\nTEST: add 2 actions\n");
	if (testG.numActions == G.numActions + 2)
		printf("Passed: action count = %d, expected = %d", testG.numActions, G.numActions + 2);
	else
		printf("Failed: action count = %d, expected = %d", testG.numActions, G.numActions + 2);

	printf("\n >>>>> Testing complete %s <<<<<\n\n", TESTCARD);

	return 0;
}
