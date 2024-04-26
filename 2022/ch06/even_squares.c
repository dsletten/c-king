/*
 *
 *   File:
 *      even_squares.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      221229  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Enter a positive integer: ");
  int n;
  scanf("%d", &n);

  if ( n <= 0 ) {
    fprintf(stderr, "Loser!\n");
    exit(EXIT_FAILURE);
  } else {
    for (int i = 2, square = i * i; square <= n; i += 2, square = i * i) {
      printf("%d\n", square);
    }

    exit(EXIT_SUCCESS);
  }
}
