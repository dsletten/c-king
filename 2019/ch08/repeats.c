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
 *      200221  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

int main(void) {
  Bool digit_seen[10] = {FALSE};
  int digit;
  long int n;
  
  printf("Enter a number: ");
  scanf("%ld", &n);

  while ( n > 0 ) {
    digit = n % 10;
    if ( digit_seen[digit] ) {
      break;
    } else {
      digit_seen[digit] = TRUE;
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
