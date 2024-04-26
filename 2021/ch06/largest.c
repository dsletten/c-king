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
 *      211015  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double max = 0;
  double x = 0;

  do {
    printf("Enter a number: ");
    x = 0;
    scanf("%lf", &x);

    if ( x > max ) {
      max = x;
    }
  } while ( x > 0 );

  if ( max > 0 ) {
    printf("The largest number entered was: %.2lf\n", max);
  } else {
    printf("Next contestant please...\n");
  }

  exit(EXIT_SUCCESS);
}
