/*
 *
 *   File:
 *      airline.c
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

void error(void);
int compute_checksum(int checksum, char digit);

int main(void) {
  printf("Enter ticket number: ");

  char previous;

  previous = getchar();

  if ( previous == '\n' ) {
    error();
  } else {
    if ( isdigit((unsigned char) previous) ) {
      int checksum = 0;
      char current;
      while ( (current = getchar()) != '\n' ) {
        if ( isdigit((unsigned char) current) ) {
          checksum = compute_checksum(checksum, previous);
          previous = current;
        } else {
          error();
        }
      }

      printf("%s\n", checksum == (previous - '0') ? "VALID" : "INVALID");
    } else {
      error();
    }
  }

  exit(EXIT_SUCCESS);
}

void error(void) {
  fprintf(stderr, "Bad input.\n");
  exit(EXIT_FAILURE);
}

int compute_checksum(int checksum, char digit) {
  return (checksum * 10 + (digit - '0')) % 7;
}
