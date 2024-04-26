/*
 *
 *   File:
 *      boolean.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200101  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  bool b;

  b = 2 < 3;

  if ( b ) {
    printf("Duh!\n");
  }

  double duh = 0.0;

  _Bool b1;
  
  b1 = (_Bool) duh;

  printf("%d\n", b1);

  b1 = (_Bool) 88.4;

  printf("%d\n", b1);

  b1 = true;
  printf("%d\n", b1);
  
  b1 = false;
  printf("%d\n", b1);
  
  exit(EXIT_SUCCESS);
}
