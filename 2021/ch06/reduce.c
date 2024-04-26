/*
 *
 *   File:
 *      reduce.c
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
  printf("Enter a fraction: ");
  int m, n;
  int count = scanf("%d/%d", &m, &n);

  if ( count != 2 ) {
    exit(EXIT_FAILURE);
  } else {
    if ( n < 0 ) {
      m *= -1;
      n *= -1;
    }
    
    int gcd = euclid(m, n);

    if ( gcd != 0 ) {
      m /= gcd;
      n /= gcd;
    }

    printf("In lowest terms: %d/%d\n", m, n);

    exit(EXIT_SUCCESS);
  }
}
