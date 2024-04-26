/*
 *
 *   File:
 *      schildt2.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200606  Original.
 *
 */
#include "schildt2.h"
#include <stdio.h>
#include <stdlib.h>

void f(struct st parm);

int main(void) {
  struct st arg;

  arg.a = 1000;
  
  f(arg);

  exit(EXIT_SUCCESS);
}

void f(struct st parm) {
  printf("%d\n", parm.a);
}
