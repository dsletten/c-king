/*
 *
 *   File:
 *      largest.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      221228  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  double largest = -1;
  double x;

  while ( true ) {
    printf("Enter a number: ");
    scanf("%lf", &x);

    if ( x <= 0 ) {
      break;
    } else if ( x > largest ) {
      largest = x;
    }
  }
    
  if ( largest > 0 ) {
    printf("\nThe largest number entered was %.10g\n", largest);
  } else {
    printf("Nothing ventured, nothing gained.\n");
  }

  exit(EXIT_SUCCESS);
}
