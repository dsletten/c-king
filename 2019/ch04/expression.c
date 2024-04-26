/*
 *
 *   File:
 *      expression.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      191229  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 1;
  int j = 2;
  
  i * j - 1;
  //expression.c:21:9: warning: statement with no effect [-Wunused-value]
  //   i * j - 1;
  //   ~~~~~~^~~

  exit(EXIT_SUCCESS);
}
