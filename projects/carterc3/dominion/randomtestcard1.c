/*
 * randomtestcard1.c - SMITHY
 */



#include "dominion.h"
#include "dominion_helpers.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include "rngs.h"

#define TESTCARD "smithy"


int main () {
	printf("----------------- Testing Card: %s ----------------\n", TESTCARD);

    srand(time(NULL));
    int numTests = 2000;

    printf("RANDOM TESTS: %d iterations\n", numTests);
    int i;
    for(i = 0; i < numTests; i++){
        struct gameState G, pre;
        int k[10] = {adventurer, embargo, village, minion, mine, cutpurse,
			sea_hag, tribute, smithy, council_room};
        //use realistic player values for dominion
        int numPlayers = rand() % (4 - 1) + 2; 
        
        initializeGame(numPlayers, k, rand(), &G);

        int thisPlayer = rand() % numPlayers;
        G.whoseTurn = thisPlayer;
        //randomize elements in cardEffect
        int bonus = rand() % 50;
        int choice1 = rand() % 50;
        int choice2 = rand() % 50;
        int choice3 = rand() % 50;
        int handPos = rand() % MAX_HAND;

        //copy of game
        memcpy(&pre, &G, sizeof(struct gameState));

        cardEffect(smithy, choice1, choice2, choice3, &G, handPos, &bonus);

        if(G.handCount[thisPlayer] != pre.handCount[thisPlayer] + 3){
            printf("Failed: draw 3 cards.\n");
        }
        
        if(G.playedCardCount != pre.playedCardCount + 1){
            printf("Failed: discard 1 card.\n");
        }
    }

    printf ("ALL TESTS COMPLETE\n");
}




