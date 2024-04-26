/*
 *
 *   File:
 *      proper_fraction.c
 *
 *   Synopsis:
 *      This combines exercises 3. and 4.
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200108  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int n);
void get_fraction(int *num, int *denom);

int main(void) {
  /* printf("%s\n", gcd(12, 28) == 4 ? "true" : "false"); */
  /* printf("%s\n", gcd(60, 42) == 6 ? "true" : "false"); */
  /* printf("%s\n", gcd(3333, -33) == 33 ? "true" : "false"); */
  /* printf("%s\n", gcd(3333, 1002001) == 11? "true" : "false"); */
  /* printf("%s\n", gcd(91, -49) == 7 ? "true" : "false"); */
  /* printf("%s\n", gcd(63, -42) == 21 ? "true" : "false"); */
  /* printf("%s\n", gcd(63, 35) == 7 ? "true" : "false"); */

  int numerator, denominator;
  get_fraction(&numerator, &denominator);

  if ( denominator < 0 ) {
    denominator *= -1;
    numerator *= -1;
  }

  int divisor = gcd(numerator, denominator);
  
  if ( divisor != 0 ) {
    numerator /= divisor;
    denominator /= divisor;
  }

  printf("In lowest terms: %d/%d\n", numerator, denominator);

  exit(EXIT_SUCCESS);
}

int gcd(int m, int n) {
  if ( m < 0 ) {
    return gcd(-m, n);
  } else if ( n < 0 ) {
    return gcd(m, -n);
  } else if ( n == 0 ) {
    return m;
  } else {
    return gcd(n, m % n);
  }
}

void get_fraction(int *num, int *denom) {
  printf("Enter a fraction: ");
  int count = scanf("%d /%d", num, denom);
  
  if ( count != 2 ) {
    while ( getchar() != '\n' );
    get_fraction(num, denom);
  }
}
