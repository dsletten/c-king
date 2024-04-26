/*
 *
 *   File:
 *      repeats3.c
 *
 *   Synopsis:
 *      Ex. 2
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      211220  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int seen[10] = {0};

  printf("Enter a number: ");
  long int n;
  int count = scanf("%ld", &n);

  if ( count == 1 ) {
    while ( n > 0 ) {
      int digit = n % 10;
      seen[digit]++;

      n /= 10;
    }

    printf("%-12s", "Digit:");
    for (int i = 0; i < 10; i++) {
      printf("%3d", i);
    }

    printf("\n");

    printf("%-12s", "Occurrences:");
    for (int i = 0; i < 10; i++) {
      printf("%3d", seen[i]);
    }

    printf("\n");

    exit(EXIT_SUCCESS);
  } else {
    exit(EXIT_FAILURE);
  }
}
