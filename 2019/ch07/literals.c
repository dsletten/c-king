/*
 *
 *   File:
 *      literals.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200111  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 00;
  int j = 0377;
  int k = 0x000;
  int m = 0x0000f;
  int n = -1;

  printf("%d %d %d %d %d\n", i , j, k, m, n);
  printf("%d\n", j * -2);

  exit(EXIT_SUCCESS);
}
