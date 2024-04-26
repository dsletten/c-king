/*
 *
 *   File:
 *      lvalue.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      191228  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;
  
  //  lvalue.c:20:6: error: lvalue required as left operand of assignment
  //  12 = i;

  printf("%d\n", i);

  i += 2;
  
  printf("%d\n", i);

  exit(EXIT_SUCCESS);
}
