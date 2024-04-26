/*
 *
 *   File:
 *      king-primes.c
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

bool is_prime(int n) {
  int divisor;
  
  if ( n <= 1 ) {
    return false;
  }

  for (divisor = 2; divisor * divisor <= n; divisor++) {
    if ( n % divisor == 0 ) {
      return false;
    }
  }

  return true;
}

int main(void) {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  if ( is_prime(n) ) {
    printf("Prime\n");
  } else {
    printf("Not prime\n");
  }

  exit(EXIT_SUCCESS);
}
