/*
 *
 *   File:
 *      squares.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      221202  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("This program prints a table of squares.\n");

  printf("Enter number of entries in table: ");
  int n;
  scanf("%d", &n);

  for (int i = 1, odd, square = 0; i <= n; i++) {
    odd = 2*i - 1;
    square += odd;

    printf("%10d%10d\n", i, square);
  }

  exit(EXIT_SUCCESS);
}
