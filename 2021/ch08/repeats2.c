/*
 *
 *   File:
 *      repeats2.c
 *
 *   Synopsis:
 *      Ex. 1
 *      
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      211218  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  int seen[10] = {0};
  bool has_repeat = false;

  printf("Enter a number: ");
  long int n;
  int count = scanf("%ld", &n);

  if ( count == 1 ) {
    while ( n > 0 ) {
      int digit = n % 10;
      seen[digit]++;

      if ( seen[digit] > 1 ) {
        has_repeat = true;
      }

      n /= 10;
    }

    if ( has_repeat ) {
      printf("Repeated digit(s):");
      for (int i = 0; i < 10; i++) {
        if ( seen[i] > 1 ) {
          printf(" %d", i);
        }
      }

      printf("\n");
    } else {
      printf("No repeated digit\n");
    }

    exit(EXIT_SUCCESS);
  } else {
    exit(EXIT_FAILURE);
  }
}
