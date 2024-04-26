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
 *      200216  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TILE_COUNT 7

int translate(int ch);

int main(void) {
  printf("Enter a word: ");

  int i = 0;
  int score = 0;

  int ch;
  while ( (ch = getchar()) != '\n' ) {
    i++;
    if ( i > TILE_COUNT ) {
      printf("Too many tiles!\n");
      exit(EXIT_FAILURE);
    } else if ( !isalpha(ch) ) {
      printf("Invalid tile: %c\n", ch);
      exit(EXIT_FAILURE);
    } else {
      score += translate(toupper(ch));
    }
  }

  printf("Scrabble value: %d\n", score);

  exit(EXIT_SUCCESS);
}

int translate(int ch) {
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
    case 'B':
    case 'C':
    case 'M':
    case 'P':
      return 3;
    case 'F':
    case 'H':
    case 'V':
    case 'W':
    case 'Y':
      return 4;
    case 'K':
      return 5;
    case 'J':
    case 'X':
      return 8;
    case 'Q':
    case 'Z':
      return 10;
  }
}
