/*
 *
 *   File:
 *      sum.c
 *
 *   Synopsis:
 *      Ex. 5 (See ch06/add_numbers.c)
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200213  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

double read_double();

int main(void) {
  double sum = 0.0;
  printf("Enter numbers (0 to terminate): ");
  
  /* while ( true ) { */
  /*   double d = read_double(); */
    
  /*   if ( d == 0 ) { */
  /*     break; */
  /*   } */

  /*   sum += d; */
  /* } */

  double d;
  //  while ( d = read_double() ) {    <-- GCC warns! sum.c:35:11: warning: suggest parentheses around assignment used as truth value [-Wparentheses]
  while ( (d = read_double()) ) {
    sum += d;
  }

  printf("The sum is: %f\n", sum);

  exit(EXIT_SUCCESS);
}

double read_double() {
  double d;

  int count = scanf("%lf", &d);

  if ( count == 1 ) {
    return d;
  } else {
    while ( getchar() != '\n' ) {}
    return read_double();
  }
}
