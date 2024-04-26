/*
 *
 *   File:
 *      repeats.c99.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200221  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  bool digit_seen[10] = {false};
  int digit;
  long int n;
  printf("sizeof(bool): %lu\n", (unsigned long) sizeof(bool));

  printf("Enter a number: ");
  scanf("%ld", &n);

  while ( n > 0 ) {
    digit = n % 10;
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
