/*
 *
 *   File:
 *      decompose.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200501  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void decompose(double x, long *integer, double *fraction);

int main(void) {
  long i;
  double x;

  decompose(M_PI, &i, &x);

  printf("%.10f -> %ld + %.10f\n", M_PI, i, x);

  exit(EXIT_SUCCESS);
}

void decompose(double x, long *integer, double *fraction) {
  *integer = (long) x;
  *fraction = x - *integer;
}
