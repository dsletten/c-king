/*
 *
 *   File:
 *      fraction.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      221228  Original.
 *
 */

#include "euclid.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Enter a fraction: ");
  int numerator, denominator;
  scanf("%d/ %d", &numerator, &denominator);

  int gcd = euclid(numerator, denominator);

  if ( gcd > 0 ) {
    numerator /= gcd;
    denominator /= gcd;
  }

  printf("In lowest terms: %d/%d\n", numerator, denominator);

  exit(EXIT_SUCCESS);
}
