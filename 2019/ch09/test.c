/*
 *
 *   File:
 *      test.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200408  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

long sum(int a[10]);

int main(void) {
  int a[5] = {1, 2, 3, 4, 5};

  printf("Sum: %ld\n", sum(a));
  
  long total = sum(a);

  exit(EXIT_SUCCESS);
}

long sum(int a[10]) {
  long sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += a[i];
  }

  return sum;
}

         
