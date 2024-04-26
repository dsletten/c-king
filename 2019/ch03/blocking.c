/*
 *
 *   File:
 *      blocking.c
 *
 *   Synopsis:
 *     A single call to scanf() with multiple conversion specifications may consume multiple lines of input, blocking until user has entered all required values:
 *     Enter three integers: 2     3
 *     -9
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      191222  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, j, k;

  printf("Enter three integers: ");
  scanf("%d %d %d", &i, &j, &k);

  printf("Thanks, pal!\n");

  exit(EXIT_SUCCESS);
}
