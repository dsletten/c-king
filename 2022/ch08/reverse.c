/*
 *
 *   File:
 *      reverse.c
 *
 *   Synopsis: Exercise 8-5
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230623  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

#define N 10
#define LENGTH(x) (sizeof(x) / sizeof(x[0]))

int main(void) {
  int a[N];

  printf("Enter %d numbers: ", N);

  /* for (int i = 0; i < N; i++) { */
  for (int i = 0; i < LENGTH(a); i++) {
    a[i] = get_int(NULL);
  }
    
  printf("In reverse order:");
  /* for (int i = N - 1; i >= 0; i--) { */
  for (int i = LENGTH(a) - 1; i >= 0; i--) {
    printf(" %d", a[i]);
  }

  printf("\n");

  exit(EXIT_SUCCESS);
}
