/* -----------------------------------------------------------------------
 * unittest4.c - isGameOver() - test for the two conditions by which the 
 * game is over
 * - last province is purchased, or
 * - all 3 card piles are empty
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
    struct gameState testG;

    int test;  

  printf ("--- TESTING isGameOver(): ---\n");
    
    //Condition where supply piles are empty
    printf("Test for supply piles being empty\n");
    memset(&G, 23, sizeof(struct gameState));   // clear the game state
    r = initializeGame(numPlayer, k, seed, &G); // initialize a new game
    memcpy(&testG, &G, sizeof(struct gameState)); //test copy of game
    //set piles to 0
    testG.supplyCount[estate] = 0;
    testG.supplyCount[duchy] = 0;
    testG.supplyCount[copper] = 0;
    //test isGameOver: returns 1 if game is over
    test = isGameOver(&testG);
    if (test == 1)
      printf("Passed: return = %d, expected = 1\n", test);
    else
      printf("Failed: return = %d, expected = 1\n", test);
      
    //Condition where supply piles are NOT empty
    printf("Test for supply piles NOT being empty\n");
    memset(&G, 23, sizeof(struct gameState));   // clear the game state
    r = initializeGame(numPlayer, k, seed, &G); // initialize a new game
    memcpy(&testG, &G, sizeof(struct gameState)); //test copy of game
    //set piles to some value other than 0
    testG.supplyCount[estate] = 1;
    testG.supplyCount[duchy] = 1;
    testG.supplyCount[copper] = 1;
    //test isGameOver: returns 1 if game is over
    test = isGameOver(&testG);
    if (test == 0)
      printf("Passed: return = %d, expected = 0\n", test);
    else
      printf("Failed: return = %d, expected = 0\n", test);
      
    //Condition where provinces are all purchased
    printf("Test for provinces all purchased\n");
    memset(&G, 23, sizeof(struct gameState));   // clear the game state
    r = initializeGame(numPlayer, k, seed, &G); // initialize a new game
    memcpy(&testG, &G, sizeof(struct gameState)); //test copy of game
    //set provinces to 0
    testG.supplyCount[province] = 0;
    //test isGameOver: returns 1 if game is over
    test = isGameOver(&testG);
    if (test == 1)
      printf("Passed: return = %d, expected = 1\n", test);
    else
      printf("Failed: return = %d, expected = 1\n", test);
      
    //Condition where NOT all provinces are purchased
    printf("Test for provinces NOT all purchased\n");
    memset(&G, 23, sizeof(struct gameState));   // clear the game state
    r = initializeGame(numPlayer, k, seed, &G); // initialize a new game
    memcpy(&testG, &G, sizeof(struct gameState)); //test copy of game
    //set provinces to some value other than 0
    testG.supplyCount[province] = 1;
    //test isGameOver: returns 1 if game is over
    test = isGameOver(&testG);
    if (test == 0)
      printf("Passed: return = %d, expected = 0\n", test);
    else
      printf("Failed: return = %d, expected = 0\n", test);
      
  
  return 0;
}