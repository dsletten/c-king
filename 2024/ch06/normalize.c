/*
 *
 *   File:
 *      normalize.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240611  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "read_num.h"
#include "euclid.h"

int main(void) {
  int numerator, denominator;

  read_fraction("Enter a fraction: ", &numerator, &denominator);

  if ( denominator < 0 ) {
    denominator = -denominator;
    numerator = -numerator;
  }
  
  int d = gcd(numerator, denominator);

  if ( d != 0 ) {
    numerator /= d;
    denominator /= d;
  }

  printf("In lowest terms: %d/%d\n", numerator, denominator);

  exit(EXIT_SUCCESS);
}
