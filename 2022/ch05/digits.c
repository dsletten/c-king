/*
 *
 *   File:
 *      digits.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      221122  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Enter a number: ");

  int n;
  scanf("%d", &n);

  int digits;
  if ( n < 0  ||  n >= 10000 ) {
    fprintf(stderr, "Bad number: %d\n", n);
    exit(EXIT_FAILURE);
  } else if ( n < 10 ) {
    digits = 1;
  } else if ( n < 100 ) {
    digits = 2;
  } else if ( n < 1000 ) {
    digits = 3;
  } else {
    digits = 4;
  }

  printf("The number %d has %d %s\n", n, digits, digits == 1 ? "digit" : "digits");

  exit(EXIT_SUCCESS);
}
