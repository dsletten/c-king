/*
 *
 *   File:
 *      remainder.c
 *
 *   Synopsis:
 *      Implementation-dependent!!!
 * 10 % 3 = 1 
 * 10 % -3 = 1 
 * -10 % 3 = -1 
 * -10 % -3 = -1
 * Same as Lisp REM
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      190731  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("10 %% 3 = %d\n", 10 % 3);
  printf("10 %% -3 = %d\n", 10 % -3);
  printf("-10 %% 3 = %d\n", -10 % 3);
  printf("-10 %% -3 = %d\n", -10 % -3);

  printf("%d / %d = %d\n", -9, 7, -9 / 7);
  printf("%f / %f = %f\n", -9.0, 7.0, -9.0 / 7.0);
  printf("%d %% %d = %d\n", -9, 7, -9 % 7);

  exit(EXIT_SUCCESS);
}
