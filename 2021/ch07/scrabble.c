/*
 *
 *   File:
 *      scrabble.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      211126  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define INVALID -1

int face_value(int ch);

int main(void) {
  printf("Enter a word: ");

  int score = 0;
  int ch;

  while ( (ch = getchar()) != '\n' ) {
    if ( isalpha(ch) ) {
      score += face_value(toupper(ch));
    } else {
      fprintf(stderr, "Invalid Scrabble letter: %c\n", ch);
      exit(EXIT_FAILURE);
    }
  }

  printf("Scrabble value: %d\n", score);

  exit(EXIT_SUCCESS);
}

/*
 *    Assumes upper-case alphabetic char.
 */
int face_value(int ch) {
  switch ( ch ) {
    case 'A':
    case 'E':
    case 'I':
    case 'L':
    case 'N':
    case 'O':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
      return 1;
    case 'D':
    case 'G':
      return 2;
    case 'F':
    case 'H':
    case 'V':
    case 'W':
    case 'Y':
      return 3;
    case 'B':
    case 'C':
    case 'M':
    case 'P':
      return 4;
    case 'K':
      return 5;
    case 'J':
    case 'X':
      return 8;
    case 'Q':
    case 'Z':
      return 10;
    default:
      return INVALID;
  }
}
