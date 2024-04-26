/*
 *
 *   File:
 *      primality.c
 *
 *   Synopsis:
 *     Exercise 14
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200108  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int get_int();

int main(void) {
  int n = get_int();

  int div;
  for (div = 2; div * div < n;) {
    if ( n % div == 0 ) {
      break;
    }

    if ( div == 2 ) {
      div++;
    } else {
      div += 2;
    }
  }

  if ( div * div < n ) {
    printf("Not prime.\n");
  } else {
    printf("Prime.\n");
  }

  exit(EXIT_SUCCESS);
}

int get_int() {
  int n;
  
  printf("Enter a positive integer: ");
  int count = scanf("%d", &n);

  if ( count != 1 ) {
    while ( getchar() != '\n' );
    return get_int();
  } else if ( n < 0 ) {
    return get_int();
  } else {
    return n;
  }
}
