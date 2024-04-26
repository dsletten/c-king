/*
 *
 *   File:
 *      max_val.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200108  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

double get_double();

int main(void) {
  double max = -1;

  while ( true ) {
    double d = get_double();

    if ( d <= 0 ) {
      break;
    } else if ( d > max ) {
      max = d;
    }
  }

  printf("The largest number entered was %f\n", max);

  exit(EXIT_SUCCESS);
}

double get_double() {
  double x;

  printf("Enter a number: ");
  int count = scanf("%lf", &x);
  
  if ( count == 1 ) {
    return x;
  } else {
    while ( getchar() != '\n' );
    return get_double();
  }
}
