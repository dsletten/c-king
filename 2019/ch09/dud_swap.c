/*
 *
 *   File:
 *      dud_swap.c
 *
 *   Synopsis:
 *       Ch. 9 ex. 9
 *       Swap has no effect on local variables.
 *       
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200423  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b);

int main(void) {
  int x = 1, y = 2;
  
  swap(x, y);
  
  printf("x = %d, y = %d\n", x, y);

  exit(EXIT_SUCCESS);
}

void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}
