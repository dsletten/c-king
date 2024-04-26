/*
 *
 *   File:
 *      structs.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200615  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct a {
  int i;
  double d;
};

struct a f(int i, double d);

int main(void) {
  struct a a1 = f(3, 2.57184);

  printf("%d %f\n", a1.i, a1.d);

  exit(EXIT_SUCCESS);
}

struct a f(int i, double d) {
  struct a a1 = {i, d};

  return a1;
}
