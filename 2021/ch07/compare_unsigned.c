/*
 *
 *   File:
 *      compare_unsigned.c
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
  unsigned int n = 5;

  /*
   *    This `if` statement is not even compiled!
   */
  if ( n < 0 ) {
    printf("Huh?\n");
  }

  exit(EXIT_SUCCESS);
}
