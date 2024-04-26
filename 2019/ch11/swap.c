/*
 *
 *   File:
 *      swap.c
 *
 *   Synopsis:
 *      Chapter 11 exercise 4 (Fix Chapter 9 exercise 9)
 *      
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200502  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main(void) {
  int m = 1, n = 2;

  printf("m: %d n: %d\n", m, n);
  swap(&m, &n);
  printf("m: %d n: %d\n", m, n);

  exit(EXIT_SUCCESS);
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
