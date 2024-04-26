/*
 *
 *   File:
 *      deal.c
 *
 *   Synopsis:
 *      Modified from ch. 8 version -- Print out cards in full
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200227  Original.
 *      200622  Ch. 13 Ex. 17
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SUITS 4
#define RANKS 13

int get_n_cards();

int main(void) {
  bool in_hand[SUITS][RANKS] = {false};
  int rank, suit;
  const char *ranks[] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
  const char *suits[] = {"clubs", "diamonds", "hearts", "spades"};

  //    Seed rng.
  srand((unsigned) time(NULL));

  int cards = get_n_cards();

  printf("Your hand: \n");

  while ( cards > 0 ) {
    suit = rand() % SUITS;
    rank = rand() % RANKS;

    if ( !in_hand[suit][rank] ) {
      in_hand[suit][rank] = true;
      cards--;

      printf("%s of %s \n", ranks[rank], suits[suit]);
    }
  }

  exit(EXIT_SUCCESS);
}

int get_n_cards() {
  printf("Enter number of cards in hand: ");
  int n;

  int count = scanf("%d", &n);

  if ( count == 1  &&  n > 0  &&  n <= SUITS*RANKS ) {
    return n;
  } else {
    while ( getchar() != '\n' ) {}

    return get_n_cards();
  }
}

