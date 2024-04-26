/*
 *
 *   File:
 *      primes.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200406  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int n);

int main(void) {
  for (int i = 0; i < 100; i++) {
    printf("%d %s a prime number.\n", i, (is_prime(i) ? "is" : "is not"));
  }

  exit(EXIT_SUCCESS);
}

bool is_prime(int n) {
  if ( n < 1 ) {
    printf("Not natural number: %d\n", n);
    return false;
  } else if ( n == 1 ) {
    return false;
  } else if ( n == 2 ) {
    return true;
  } else if ( n % 2 == 0 ) {
    return false;
  } else {
    int limit = (int) sqrt(n);
    for (int divisor = 3; divisor <= limit; divisor += 2) {
      if ( n % divisor == 0 ) {
	return false;
      }
    }

    return true;
  }
}
