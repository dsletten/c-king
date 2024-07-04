/*
 *
 *   File:
 *      squares.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240613  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "read_num.h"

int main(void) {
  int limit = read_int_min("Enter a positive integer: ", 0);
  
  for (int i = 2, square = i * i; square <= limit; i += 2, square = i * i) {
    printf("%d\n", square);
  }

  exit(EXIT_SUCCESS);
}
