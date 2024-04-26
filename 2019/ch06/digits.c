/*
 *
 *   File:
 *      digits.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200105  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int get_integer();

int main(void) {
  int n = get_integer();

  int m;
  
  if ( n < 0 ) {
    m = -n;
  } else {
    m = n;
  }

  int digits = 1;

  /* do { */
  /*   m /= 10; */
  /*   digits++; */
  /* } while ( m > 0 ); */

  /* printf("The number %d has %d %s.\n", n, digits, digits == 1 ? "digit" : "digits"); */

  /* m = n; */
  digits = 1;

  while ( m > 10 ) {
    m /= 10;
    digits++;
  }

  printf("The number %d has %d %s.\n", n, digits, digits == 1 ? "digit" : "digits");

  exit(EXIT_SUCCESS);
}

int get_integer() {
  int n;

  printf("Enter an integer: ");
  int count = scanf("%d", &n);
  
  if ( count != 1 ) {
    while ( getchar() != '\n' );
    return get_integer();
  } else {
    return n;
  }
}
