/*
 *
 *   File:
 *      scanf.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      191222  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;
  int *p = &i;

  printf("Enter an integer: ");
  int results = scanf("%d", p);

  if ( results == 1 ) {
    printf("Value: %d\n", i);
  } else {
    printf("Huh? %d\n", results);
  }

  int m, n;
  float x;

  printf("Enter int int float: ");
  results = scanf("%d %d %f", &m, &n, &x);

  if ( results > 0 ) {
    printf("m = %d\n", m);
  }

  if ( results > 1 ) {
    printf("n = %d\n", n);
  }

  if ( results > 2 ) {
    printf("x = %f\n", x);
  }

  exit(EXIT_SUCCESS);
}
