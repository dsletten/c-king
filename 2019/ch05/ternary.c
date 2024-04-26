/*
 *
 *   File:
 *      ternary.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200102  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int foo(int i, int j) {
  /* if ( i > j ) { */
  /*   return i; */
  /* } else { */
  /*   return j; */
  /* } */

  //  return i > j ? i : j;
  return (i > j) * i + (i <= j) * j;
}

int main(void) {
  double x = 1 / 2;
  printf("%f\n", x);

  x = 1.0 / 2.0;
  printf("%f\n", x);

  x = 1 / (2 < 3 ? 2 : 1); // int 2 divisor
  printf("%f\n", x);

  x = 1 / (2 < 3 ? 2 : 1.0); // double 2 divisor
  printf("%f\n", x);

  x = 0.8;
  printf("%f\n", x);
  printf("%f\n", 1 / (2 < 3 ? 2 : 1)); // Produces compiler warning %f expects double. The int value fails to load anything into floating-point register, so existing garbage is printed!!!
  printf("%f\n", (double) (1 / (2 < 3 ? 2 : 1)));
  printf("%f\n", 1 / (2 < 3 ? 2 : 1.0));

  printf("%f %f %f %f %f %f %f %f %f\n", 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9);

  int i = 1;
  int j = 3;

  int k;

  if ( i > j ) {
    k = 2;
  } else {
    k = 9;
  }

  printf("%d\n", k);

  (i > j) ? (k = 2) : (k = 9);

  printf("%d\n", k);

  printf("%d\n", foo(7, 11));

  exit(EXIT_SUCCESS);
}
