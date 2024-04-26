/*
 *
 *   File:
 *      squares.c
 *
 *   Synopsis:
 *      Exercise 6. Print even squares <= limit
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200108  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int get_limit();

int main(void) {
  int limit = get_limit();

  int i;
  int square;
  for (i = 2, square = i * i; square <= limit; i += 2, square = i * i) {
    printf("%d\n", square);
  }

  exit(EXIT_SUCCESS);
}

int get_limit() {
  int limit;

  printf("Enter the upper limit: ");
  int count = scanf("%d", &limit);

  if ( count != 1 ) {
    while ( getchar() != '\n' );
    return get_limit();
  } else if ( limit < 0 ) {
    return get_limit();
  } else {
    return limit;
  }
}
