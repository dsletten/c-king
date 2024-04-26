/*
 *
 *   File:
 *      vla.c
 *
 *   Synopsis:
 *      Experiment with variable-length arrays
 *      
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      230520  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int n = 10;
  int a[n];

  printf("%d\n", a[0]);

  memset(a, 0, n * sizeof(int));
  
  printf("%d\n", a[0]);

  exit(EXIT_SUCCESS);
}
