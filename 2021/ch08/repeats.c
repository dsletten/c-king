/*
 *
 *   File:
 *      repeats.c
 *
 *   Synopsis:
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
  bool seen[10] = {false};

  printf("Enter a number: ");
  long int n;
  int count = scanf("%ld", &n);

  if ( count == 1 ) {
    while ( n > 0 ) {
      int digit = n % 10;
      if ( seen[digit] ) {
        break;
      } else {
        seen[digit] = true;
      }

      n /= 10;
    }

    if ( n > 0 ) {
      printf("Repeated digit\n");
    } else {
      printf("No repeated digit\n");
    }

    exit(EXIT_SUCCESS);
  } else {
    exit(EXIT_FAILURE);
  }
}
