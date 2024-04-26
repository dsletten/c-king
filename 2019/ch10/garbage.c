/*
 *
 *   File:
 *      garbage.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200426  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

void foo(void);

int main(void) {
  foo();

  exit(EXIT_SUCCESS);
}

void foo(void) {
  int n;
  double x;

  printf("%d\n", n);
  printf("%.10f\n", x);
}
