/*
 *
 *   File:
 *      goto.c
 *
 *   Synopsis:
 *      Stupid goto tests.
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200106  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
 foo:
  printf("Shut up...\n");
  goto foo;

  // foo:
  printf("Help! I can never get here...\n");

  exit(EXIT_SUCCESS);
}
