/*
 *
 *   File:
 *      function_pointer.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200629  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int f(int (*g)(int), int n);
int g(int n);
int h(int n);

int main(void) {
  int n = 9;

  int result = f(g, n);
  printf("g(f(n)): %d\n", result);
  printf("g(n): %d\n", g(n)); // Call directly

  result = f(h, n);
  printf("h(f(n)): %d\n", result);
  printf("h(n): %d\n", h(n)); // Call directly

  int (*fns[])(int) = {g, h};
  printf("g(n): %d\n", (*fns[0])(n)); // Call via array
  printf("h(n): %d\n", fns[1](n)); // Call via array
  
  exit(EXIT_SUCCESS);
}

int f(int (*g)(int), int n) {
  return (*g)(2 * n);
}

int g(int n) {
  return n - 5;
}

int h(int n) {
  return n * 10;
}
