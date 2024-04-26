/*
 *
 *   File:
 *      test.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200111  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void) {
  double x = 1.234;
  int i = 0;

  printf("%.0d %f\n", i, x);

  printf("|%u|\n", 45);
  printf("|%u|\n", -45);

  printf("%d %d %d %d %d %d\n", 3, 5, 7, 9, 11, 13);

  printf("%d %f %f %d\n", 12, 3.5, 9.7, 88);

  printf("%d\n", DBL_MIN);

  exit(EXIT_SUCCESS);
}
