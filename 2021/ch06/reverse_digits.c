
/*
 *
 *   File:
 *      reverse_digits.c
 *
 *   Synopsis:
 *      Print integer with its digits reversed.
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      211018  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int get_int(void);

int main(void) {
  int n = get_int();
  
  printf("Reversed: ");

  do {
    printf("%d", n % 10);
    n /= 10;
  } while ( n > 0 );

  printf("\n");

  exit(EXIT_SUCCESS);
}

int get_int(void) {
  printf("Enter a non-negative integer: ");
  int n;
  int count = scanf("%d", &n);

  if ( count == 0 ) {
    while ( getchar() != '\n' ) {}
    return get_int();
  } else if ( n < 0 ) {
    return get_int();
  } else {
    return n;
  }
}
