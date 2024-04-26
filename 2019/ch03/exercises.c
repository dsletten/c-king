/*
 *
 *   File:
 *      exercises.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      190728  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  /*
   *    Ex. 1
   */
  printf("%6d,%4d", 86, 1040);
  printf("\n");
  printf("%12.5e", 30.253);
  printf("\n");
  printf("%.4f", 83.162);
  printf("\n");
  printf("%-6.2g", 0.0000009979);
  printf("\n");

  /*
   *    Ex. 2
   */
  float x = 12.345;

  printf("|%-8.1e|\n", x);
  printf("|%10.6e|\n", x);
  printf("|%10e|\n", x);
  printf("|%-8.3f|\n", x);
  printf("|%6.0f|\n", x);

  exit(EXIT_SUCCESS);
}
