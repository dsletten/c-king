/*
 *
 *   File:
 *      even_squares.c
 *
 *   Synopsis:
 *      Ex. 6.6 Even squares between 1 and n.
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      211019  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Enter limit: ");
  int n;
  int count = scanf("%d", &n);

  if ( count == 0 ) {
    exit(EXIT_FAILURE);
  } else {
    for (int i = 2, j = i * i; j <= n; i += 2, j = i * i) {
      printf("%d\n", j);
    }

    exit(EXIT_SUCCESS);
  }
}
