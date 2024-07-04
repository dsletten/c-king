/*
 *
 *   File:
 *      reverse_digits.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240611  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "read_num.h"

int main(void) {
  int n = read_int_min("Enter a non-negative integer: ", 0);

  printf("The reversal is: ");
  
  do {
    printf("%d", n % 10);
    n /= 10;
  } while ( n > 0 );

  printf("\n");

  exit(EXIT_SUCCESS);
}
