/*
 *
 *   File:
 *      reverse3.c
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

  printf("Enter a three-digit number: ");
  scanf("%d", &n);

  printf("The reversal is: %d%d%d\n", n%10, (n%100)/10, n/100);

  exit(EXIT_SUCCESS);
}
