/*
 *
 *   File:
 *      tags.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200711  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct pung {
  int i;
  double d;
};

/* union pung { */
/*   int i; */
/*   double d; */
/* }; */

/* enum pung {pung, foo}; */

int main(void) {
  struct pung p1 = {3, 5.1};
  printf("p1 i=%d d=%f\n", p1.i, p1.d);

  /* union pung p2 = {4}; */
  /* printf("p2 i=%d [d=%f]\n", p2.i, p2.d); */

  /* union pung p3 = {.d = 2.3}; */
  /* printf("p3 [i=%d] d=%f\n", p3.i, p3.d); */

  /* struct pung p4 = {pung, foo}; */
  /* printf("p4 i=%d d=%f\n", p4.i, p4.d); */

  exit(EXIT_SUCCESS);
}
