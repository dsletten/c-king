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
 *      240609  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "read_num.h"
#include "euclid.h"

int main(void) {
  int m = read_int("Enter two integers: ");
  int n = read_int_no_prompt();

  printf("Greatest common divisor: %d\n", gcd(m, n));

  exit(EXIT_SUCCESS);
}

