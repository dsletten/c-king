/*
 *
 *   File:
 *      length.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230127  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n = 0;

  printf("Enter a message: ");

  while ( getchar() != '\n' ) {
    n++;
  }

  printf("Your message was %d %s long.\n", n, (n == 1 ? "character" : "characters"));

  exit(EXIT_SUCCESS);
}
