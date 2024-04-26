/*
 *
 *   File:
 *      repdigit.c
 *
 *   Synopsis:
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

  long int n = get_long("Enter a number: ");

  while ( n > 0 ) {
    int digit = n % 10;

    if ( digit_seen[digit] ) {
      break;
    } else {
      digit_seen[digit] = true;
    }

    n /= 10;
  }

  if ( n > 0 ) {
    printf("Repeated digit\n");
  } else {
    printf("No repeated digit\n");
  }

  exit(EXIT_SUCCESS);
}
