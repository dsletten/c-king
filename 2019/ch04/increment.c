/*
 *
 *   File:
 *      increment.c
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
  int i, j, k;

  i = 1;
  j = 2;
  k = ++i + j++;

  printf("%d\n", k);

  i = 3;
  j = 4;
  k = i++ + j++;

  printf("%d\n", k);

  //  ++(i++);
  //increment.c:32:3: error: lvalue required as increment operand
  //   ++(i++);
  //   ^~
  
  //  printf("%d\n", i);


  double x = 1.2345e20;

  printf("%f\n", x);
  x++;
  printf("%f\n", x);

  exit(EXIT_SUCCESS);
}
