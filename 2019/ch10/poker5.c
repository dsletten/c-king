/*
 *
 *   File:
 *      poker5.c
 *
 *   Synopsis:
 *       Exercise 4 version modified for exercise 5.
 *       Check for royal flush = highest straight flush (10/J/Q/K/A same suit).
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200430  Original.
 *
 *
 *      Fix switch indentation!!
 *      (c-set-offset 'case-label '+)
 *      On the fly: C-c C-o
 *      https://stackoverflow.com/questions/8985523/how-to-make-cases-in-switch-statement-to-be-indented-in-emacs
 *      https://www.gnu.org/software/emacs/manual/html_node/efaq/Indenting-switch-statements.html
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N_RANKS 13
#define N_SUITS 4
#define N_CARDS 5
#define RANK 0
#define SUIT 1

#define TWO 0
#define THREE 1
#define FOUR 2
#define FIVE 3
#define SIX 4
#define SEVEN 5
#define EIGHT 6
#define NINE 7
#define TEN 8
#define JACK 9
#define QUEEN 10
#define KING 11
#define ACE 12
#define BAD_RANK -1

#define CLUB 0
#define DIAMOND 1
#define HEART 2
#define SPADE 3
#define BAD_SUIT -1

bool royal, straight, flush, four, three;
int pairs;

void initialize(int cards[][2]);
void read_cards(int cards[][2]);
void analyze_hand(int cards[][2]);
void print_result(void);
int select_rank(char r);
int select_suit(char s);
bool card_exists(int cards[][2], int cards_read, int rank, int suit);
int num_in_rank(int cards[][2], int rank);
bool is_flush(int cards[][2], int suit);
bool is_straight(int cards[][2], int rank);

int main(void) {
  int cards[N_CARDS][2];

  while ( true ) {
    initialize(cards);
    read_cards(cards);
    analyze_hand(cards);
    print_result();
  }
}

void initialize(int cards[][2]) {
  for (int i = 0; i < N_CARDS; i++) {
    cards[i][RANK] = 0;
    cards[i][SUIT] = 0;
  }

  royal = false;
  straight = false;
  flush = false;
  four = false;
  three = false;
  pairs = 0;
}

void read_cards(int cards[][2]) {
  int cards_read = 0;

  while ( cards_read < N_CARDS ) {
    printf("Enter a card: ");

    int rank = select_rank(getchar());
    int suit = select_suit(getchar());
    bool bad_card = false;

    char ch;
    while ( (ch = getchar()) != '\n' ) {
      if ( ch != ' ' ) {
        bad_card = true;
      }
    }

    if ( (rank == BAD_RANK)  ||  (suit == BAD_SUIT)  ||  bad_card ) {
      printf("Bad card; ignored.\n");
    } else if ( card_exists(cards, cards_read, rank, suit) ) {
      printf("Duplicate card; ignored.\n");
    } else {
      cards[cards_read][RANK] = rank;
      cards[cards_read][SUIT] = suit;
      cards_read++;
    }
  }
}

int select_rank(char r) {
    switch ( r ) {
      case '0':           exit(EXIT_SUCCESS);
      case '2':           return TWO;
      case '3':           return THREE;
      case '4':           return FOUR;
      case '5':           return FIVE;
      case '6':           return SIX;
      case '7':           return SEVEN;
      case '8':           return EIGHT;
      case '9':           return NINE;
      case 't': case 'T': return TEN;
      case 'j': case 'J': return JACK;
      case 'q': case 'Q': return QUEEN;
      case 'k': case 'K': return KING;
      case 'a': case 'A': return ACE;
      default:            return BAD_RANK;
    }
}

int select_suit(char s) {
  switch ( s ) {
    case 'c': case 'C': return CLUB;
    case 'd': case 'D': return DIAMOND;
    case 'h': case 'H': return HEART;
    case 's': case 'S': return SPADE;
    default:            return BAD_SUIT;
  }
}

bool card_exists(int cards[][2], int cards_read, int rank, int suit) {
  for (int i = 0; i < cards_read; i++) {
    if ( cards[i][RANK] == rank  &&  cards[i][SUIT] == suit ) {
      return true;
    }
  }

  return false;
}

void analyze_hand(int cards[][2]) {
  for (int suit = 0; suit < N_SUITS; suit++) {
    if ( is_flush(cards, suit) ) {
      flush = true;
      break;
    }
  }

  /*
   *    Check for straight. First find lowest card.
   */
  int low_card = TWO;
  while ( num_in_rank(cards, low_card) == 0 ) {
    low_card++;
  }

  if ( is_straight(cards, low_card) ) {
    straight = true;

    if ( low_card == TEN  &&  flush ) {
      royal = true;
    }

    return;
  }

  for (int rank = 0; rank < N_RANKS; rank++) {
    switch ( num_in_rank(cards, rank) ) {
      case 4: 
        four = true;
        break;
      case 3:
        three = true;
        break;
      case 2:
        pairs++;
        break;
    }
  }
}

int num_in_rank(int cards[][2], int rank) {
  int count = 0;
  for (int i = 0; i < N_CARDS; i++) {
    if ( cards[i][RANK] == rank ) {
      count++;
    }
  }

  return count;
}

bool is_flush(int cards[][2], int suit) {
  int count = 0;
  for (int i = 0; i < N_CARDS; i++) {
    if ( cards[i][SUIT] == suit ) {
      count++;
    }
  }

  return count == N_CARDS;
}

bool is_straight(int cards[][2], int low_card) {
  int consecutive = 0;
  for (int rank = low_card; rank < N_RANKS && num_in_rank(cards, rank) == 1; rank++) {
    consecutive++;
  }

  return consecutive == N_CARDS;
}

void print_result(void) {
  if ( royal ) {
    printf("Yassss! Royal flush\n\n");
  } else if ( straight && flush ) {
    printf("Straight flush\n\n");
  } else if ( four ) {
    printf("Four of a kind\n\n");
  } else if ( three && pairs == 1 ) {
    printf("Full house\n\n");
  } else if ( flush ) {
    printf("Flush\n\n");
  } else if ( straight ) {
    printf("Straight\n\n");
  } else if ( three ) {
    printf("Three of a kind\n\n");
  } else if ( pairs == 2 ) {
    printf("Two pairs\n\n");
  } else if ( pairs == 1 ) {
    printf("Pair\n\n");
  } else {
    printf("High card\n\n");
  }
}
