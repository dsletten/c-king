/*
 *
 *   File:
 *      digits_math.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240516  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int get_number();
int count_digits(int n);

int main(void) {
  int n = get_number();

  int digits = count_digits(n);

  printf("The number %d has %d %s\n", n, digits, digits == 1 ? "digit" : "digits");
   
  exit(EXIT_SUCCESS);
}

int get_number() {
  int n;
  printf("Enter a number: ");
  int count = scanf("%d", &n);

  if ( count == 1 ) {
    return n;
  } else {
    while ( getchar() != '\n' );
    return get_number();
  }
}

int count_digits(int n) {
  if ( n == 0 ) {
    return 1;
  } else {
    return ((int) floor(log10(abs(n)))) + 1;
  }
}
