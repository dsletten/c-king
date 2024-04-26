/*
 *
 *   File:
 *      gcd.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      221228  Original.
 *
 */
#include "euclid.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Enter two integers: ");
  int m, n;
  scanf("%d %d", &m, &n);

  printf("Greatest common divisor: %d\n", euclid(m, n));
  
  exit(EXIT_SUCCESS);
}
