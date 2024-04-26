/*
 *
 *   File:
 *      gcd.c
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
#include "euclid.h"

int main(void) {
  int m, n;
  printf("Enter two integers: ");
  int count = scanf("%d", &m);

  if ( count != 1 ) {
    exit(EXIT_FAILURE);
  }

  count = scanf("%d", &n);

  if ( count != 1 ) {
    exit(EXIT_FAILURE);
  }

  int gcd = euclid(m, n);
  
  printf("Greatest common divisor: %d\n", gcd);

  exit(EXIT_SUCCESS);
}
