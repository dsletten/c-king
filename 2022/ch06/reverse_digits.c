/*
 *
 *   File:
 *      reverse_digits.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      221228  Original.
 *
 *      Enter a non-negative integer: 1234567890
 *      The number reversed is: 987654321
 */

#include <stdio.h>
#include <stdlib.h>

int reverse(int n);

int main(void) {
  printf("Enter a non-negative integer: ");

  int n;
  scanf("%d", &n);

  printf("The number reversed is: %d\n", reverse(n));

  exit(EXIT_SUCCESS);
}

int reverse_int(int n, int result) {
  if ( n == 0 ) {
    return result;
  } else {
    return reverse_int(n / 10, result * 10 + n % 10);
  }
}

int reverse(int n) {
  return reverse_int(n, 0);
}
