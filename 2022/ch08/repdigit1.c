/*
 *
 *   File:
 *      repdigit1.c
 *
 *   Synopsis: Exercise 8-1
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230612  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "utils.h"

int main(void) {
  bool digit_seen[10] = {false};
  bool repeated_digits[10] = {false};

  long int n = get_long("Enter a number: ");

  bool repeats = false;
  while ( n > 0 ) {
    int digit = n % 10;

    if ( digit_seen[digit] ) {
      repeats = true;
      repeated_digits[digit] = true;
    } else {
      digit_seen[digit] = true;
    }

    n /= 10;
  }

  if ( repeats ) {
    printf("Repeated digit(s):");
    for (int i = 0; i < 10; i++) {
      if ( repeated_digits[i] ) {
        printf("%2d", i);
      }
    }

    printf("\n");
  } else {
    printf("No repeated digit\n");
  }
  
  exit(EXIT_SUCCESS);
}
