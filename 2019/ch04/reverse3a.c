/*
 *
 *   File:
 *      reverse3a.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      191231  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int d1, d2, d3;

  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &d1, &d2, &d3);

  printf("The reversal is: %d%d%d\n", d3, d2, d1);

  exit(EXIT_SUCCESS);
}
