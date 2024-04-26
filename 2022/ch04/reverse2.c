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
 *      221005  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Enter a two-digit number: ");

  int n;
  scanf("%d", &n);

  printf("The number reversed is: %d%d\n", n % 10, n / 10);
  
  exit(EXIT_SUCCESS);
}
