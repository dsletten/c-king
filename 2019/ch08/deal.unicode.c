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
 *U+2660 	U+2665 	U+2666 	U+2663
 *♠ 	♥ 	♦ 	♣       
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <wchar.h>
#include <locale.h>

#define SUITS 4
#define RANKS 13

int get_n_cards();

int main(void) {
  setlocale(LC_CTYPE, "en_US.UTF-8");

  bool in_hand[SUITS][RANKS] = {false};

  const char ranks[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'J', 'Q', 'K', 'A'};
  /* const char suits[] = {'c', 'd', 'h', 's'}; */
  //  const wchar_t suits[] = {'\u2663', '\u2666', '\u2665', '\u2660'};
  const wchar_t suits[] = {0x2663, 0x2666, 0x2665, 0x2660};
  srand((unsigned) time(NULL));

  int cards = get_n_cards();

  wprintf(L"Your hand: ");

  while ( cards > 0 ) {
    int suit = rand() % SUITS;
    int rank = rand() % RANKS;

    if ( !in_hand[suit][rank] ) {
      in_hand[suit][rank] = true;
      cards--;

      /* printf("%c%c ", ranks[rank], suits[suit]); */
      //      printf("%c", ranks[rank]);
      //      wprintf(L"%lc ", suits[suit]);
      putwchar(ranks[rank]);
      putwchar(suits[suit]);
      putwchar(' ');
    }
  }

  wprintf(L"\n");

/* setlocale(LC_CTYPE, "UTF-8"); */
/*     wchar_t star = 0x2605; */
/*     wprintf(L"%lc\n", star); */
  exit(EXIT_SUCCESS);
}

int get_n_cards() {
  wprintf(L"Enter number of cards in hand: ");
  int n;

  int count = scanf("%d", &n);

  if ( count == 1  &&  n > 0  &&  n <= SUITS*RANKS ) {
    return n;
  } else {
    while ( getchar() != '\n' ) {}

    return get_n_cards();
  }
}

