/* -----------------------------------------------------------------------
 * unittest3.c - numHandCards() - verify expected result for number 
 * of cards in player's hand
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

    int c;  //cards in hand

  printf ("--- TESTING numHandCards(): ---\n");
    memset(&G, 23, sizeof(struct gameState));   // clear the game state
    r = initializeGame(numPlayer, k, seed, &G); // initialize a new game
    c = numHandCards(&G);
    
    //New game should initialize to 5 drawn cards for each player
    printf("Player 1\n");
    if (c == 5)
      printf("Passed: cards = %d, expected = 5\n", c);
    else
      printf("Failed: cards = %d, expected = 5\n", c);
      
    
    printf("Player 2\n");
    endTurn(&G);
    c = numHandCards(&G);
    
    if (c == 5)
      printf("Passed: cards = %d, expected = 5\n", c);
    else
      printf("Failed: cards = %d, expected = 5\n", c);
  
  return 0;
}