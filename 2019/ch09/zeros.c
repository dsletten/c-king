/*
 *
 *   File:
 *      zeros.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200423  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool has_zero(int a[], int n);

int main(void) {
  int a[10] = {2, 6, 5, 4, 7, 0, 9, 6, 8, 0};
  int b[10] = {5, 4, 2, 3, 8, 7, 3, 9, 6, 7};

  printf("%d\n", has_zero(a, 10));
  printf("%d\n", has_zero(b, 10));

  exit(EXIT_SUCCESS);
}

bool has_zero(int a[], int n) {
  for (int i = 0; i < n; i++) {
    if ( a[i] == 0 ) {
      return true;
    }
  }

  return false;
}
