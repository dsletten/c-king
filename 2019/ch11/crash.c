/*
 *
 *   File:
 *      crash.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200430  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int **p;

  **p = 9999;

  printf("Did we make it?\n");
  printf("%d\n", **p);

  exit(EXIT_SUCCESS);
}
