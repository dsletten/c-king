/*
 *
 *   File:
 *      conversions.c
 *
 *   Synopsis:
 *       Chapter 9 ex. 7
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200423  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int f(int a, int b);

int main(void) {
  int i;
  float x;
  
  i = f(83, 12);
  printf("%d\n", i);

  x = f(83, 12);
  printf("%.10f\n", x);

  i = f(3.15, 9.28);
  printf("%d\n", i);

  x = f(3.15, 9.28);
  printf("%.10f\n", x);

  f(83, 12);
  (void) f(83, 12);

  exit(EXIT_SUCCESS);
}

int f(int a, int b) {
  return a + b;
}
