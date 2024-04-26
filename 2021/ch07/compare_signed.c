/*
 *
 *   File:
 *      compare_signed.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      211112  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n = 5;

  if ( n < 0 ) {
    printf("Huh?\n");
  }

  exit(EXIT_SUCCESS);
}
