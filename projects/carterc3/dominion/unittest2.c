/* -----------------------------------------------------------------------
 * unittest2.c - whoseTurn() - verify expected result for player 
 * whose turn it is
 * -----------------------------------------------------------------------
 */

#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "rngs.h"

int main(){

  int r;
    int seed = 1000;
    int numPlayer = 2;
    int k[10] = {adventurer, council_room, feast, gardens, mine
               , remodel, smithy, village, baron, great_hall};
    struct gameState G;

    int t;  //player whose turn it is

  printf ("--- TESTING whoseTurn(): ---\n");
    memset(&G, 23, sizeof(struct gameState));   // clear the game state
    r = initializeGame(numPlayer, k, seed, &G); // initialize a new game
    t = whoseTurn(&G);
    
    //New game should initialize to 0 for player 1
    printf("Player 1\n");
    if (t == 0)
      printf("Passed: player = %d, expected = 0\n", t);
    else
      printf("Failed: player = %d, expected = 0\n", t);
      
    
    printf("Player 2\n");
    endTurn(&G);
    t = whoseTurn(&G);
    
    if (t == 1)
      printf("Passed: player = %d, expected = 1\n", t);
    else
      printf("Failed: player = %d, expected = 1\n", t);
  
  return 0;
}