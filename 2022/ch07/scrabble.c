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
 *      230507  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int get_value(char ch);

int main(void) {
  printf("Enter a word: ");

  int value = 0;
  char ch;
  while ( (ch = getchar()) != '\n' ) {
    value += get_value(toupper((unsigned char) ch));
  }

  printf("Scrabble value: %d\n", value);
  
  exit(EXIT_SUCCESS);
}

/* (defun cases (s n) (loop for ch across s do (format t "case '~C':~%" ch) finally (format t "return ~D;~%" n))) */
/* (loop for n in '(1 2 3 4 5 8 10) for s in '("AEILNORSTU" "DG" "BCMP" "FHVWY" "K" "JX" "QZ") do (cases s n)) */

int get_value(char ch) {
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
    default:
      return 0;
  }
}
