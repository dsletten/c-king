/*
 *
 *   File:
 *      exercise7.c
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
  int i, j, k;

  //    Well-defined
  i = 1;
  printf("%d ", i++ - 1);
  printf("%d\n", i);

  //    Well-defined
  i = 10;
  j = 5;
  printf("%d ", i++ - ++j);
  printf("%d %d\n", i, j);

  //    Well-defined
  i = 7;
  j = 8;
  printf("%d ", i++ - --j);
  printf("%d %d\n", i, j);

  i = 3;
  j = 4;
  k = 5;
  printf("%d ", i++ - j++ + --k);
  printf("%d %d %d\n", i, j, k);

  exit(EXIT_SUCCESS);
}
