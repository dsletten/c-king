/*
 *
 *   File:
 *      phone_number.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200215  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int translate(int ch);

int main(void) {
  printf("Enter phone number: ");
  
  int ch;
  while ( (ch = getchar()) != '\n' ) {
    if ( isalpha(ch) ) { // Cast??
      printf("%c", translate(ch)); // Cast??
    } else {
      printf("%c", ch);
    }
  }

  printf("\n");

  exit(EXIT_SUCCESS);
}

int translate(int ch) {
  switch ( ch ) {
    case 'A':
    case 'B':
    case 'C':
      return '2';
    case 'D':
    case 'E':
    case 'F':
      return '3';
    case 'G':
    case 'H':
    case 'I':
      return '4';
    case 'J':
    case 'K':
    case 'L':
      return '5';
    case 'M':
    case 'N':
    case 'O':
      return '6';
    case 'P':
    case 'R':
    case 'S':
      return '7';
    case 'T':
    case 'U':
    case 'V':
      return '8';
    case 'W':
    case 'X':
    case 'Y':
      return '9';
    default:
      return ch;
  }
}
