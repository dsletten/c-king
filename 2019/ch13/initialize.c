/*
 *
 *   File:
 *      initialize.c
 *
 *   Synopsis:
 *      Array initialized by array initializer not string literal!
 *      
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200510  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *pung = "pung";
  char foo[] = "foo";
  /* char bar[] = {'b', 'a', 'r'}; */
  char bar[] = {'b', 'a', 'r', '\0'};

  printf("%s\n", pung);
  printf("%s\n", foo);
  printf("%s\n", bar);

  exit(EXIT_SUCCESS);
}
