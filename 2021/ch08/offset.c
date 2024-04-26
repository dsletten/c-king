/*
 *
 *   File:
 *      offset.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      211218  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *b = a - 1;

  for (int i = 0; i < 10; i++) {
    printf("%d ", a[i]);
  }

  printf("\n");
  
  for (int i = 1; i <= 10; i++) {
    printf("%d ", b[i]);
  }

  printf("\n");

  exit(EXIT_SUCCESS);
}
