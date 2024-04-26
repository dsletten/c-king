/*
 *
 *   File:
 *      exercise10.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      221005  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 1;

  printf("%d\n", (i++) + (i--));

  exit(EXIT_SUCCESS);
}
