/*
 *
 *   File:
 *      poker.king.c
 *
 *   Synopsis:
 *       King's original poker program (more or less)
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200428  Original.
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

int num_in_rank[N_RANKS];
int num_in_suit[N_SUITS];
bool straight, flush, four, three;
int pairs;

void initialize(void);
void read_cards(void);
void analyze_hand(void);
void print_result(void);
int select_rank(char r);
int select_suit(char s);

int main(void) {
  while ( true ) {
    initialize();
    read_cards();
    analyze_hand();
    print_result();
  }
}

void initialize(void) {
  for (int rank = 0; rank < N_RANKS; rank++) {
    num_in_rank[rank] = 0;
  }
  for (int suit = 0; suit < N_SUITS; suit++) {
    num_in_suit[suit] = 0;
  }

  straight = false;
  flush = false;
  four = false;
  three = false;
  pairs = 0;
}

void read_cards(void) {
  bool card_exists[N_RANKS][N_SUITS] = {false};
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
    } else if ( card_exists[rank][suit] ) {
      printf("Duplicate card; ignored.\n");
    } else {
      num_in_rank[rank]++;
      num_in_suit[suit]++;
      card_exists[rank][suit] = true;
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
    
void analyze_hand(void) {
  int consecutive = 0;
  
  for (int suit = 0; suit < N_SUITS; suit++) {
    if ( num_in_suit[suit] == N_CARDS ) {
      flush = true;
      break;
    }
  }

  int rank = 0;
  while ( num_in_rank[rank] == 0 ) {
    rank++;
  }

  for (; rank < N_RANKS && num_in_rank[rank] == 1; rank++) {
    consecutive++;
  }

  if ( consecutive == N_CARDS ) {
    straight = true;
    return;
  }

  for (int rank = 0; rank < N_RANKS; rank++) {
    switch ( num_in_rank[rank] ) {
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

void print_result(void) {
  if ( straight && flush ) {
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
