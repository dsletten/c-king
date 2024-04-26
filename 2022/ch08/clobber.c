/*
 *
 *   File:
 *      clobber.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230526  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, a[10];

  for (i = 1; i <= 10; i++) {
    a[i] = 0;
  }
  
  exit(EXIT_SUCCESS);
}
