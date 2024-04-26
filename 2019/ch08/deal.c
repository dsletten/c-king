/*
 *
 *   File:
 *      deal.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200227  Original.
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

  const char ranks[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
  const char suits[] = {'c', 'd', 'h', 's'};

  //    Seed rng.
  srand((unsigned) time(NULL));

  int cards = get_n_cards();

  printf("Your hand: ");

  while ( cards > 0 ) {
    int suit = rand() % SUITS;
    int rank = rand() % RANKS;

    if ( !in_hand[suit][rank] ) {
      in_hand[suit][rank] = true;
      cards--;

      printf("%c%c ", ranks[rank], suits[suit]);
    }
  }

  printf("\n");

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

