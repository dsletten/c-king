/*
 *
 *   File:
 *      reverse2.c
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
  int n;

  printf("Enter a two-digit number: ");
  scanf("%d", &n);

  printf("The reversal is: %d%d\n", n%10, n/10);

  exit(EXIT_SUCCESS);
}
