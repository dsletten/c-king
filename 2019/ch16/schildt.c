/*
 *
 *   File:
 *      schildt.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200606  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

void f(struct { int x, y; char ch;} parm);

int main(void) {
  struct {
    int a, b;
    char ch;
  } arg;

  arg.a = 1000;
  
  f(arg);

  exit(EXIT_SUCCESS);
}

void f(struct { int x, y; char ch;} parm) {
  printf("%d\n", parm.x);
}
