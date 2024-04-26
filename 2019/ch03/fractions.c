/*
 *
 *   File:
 *      fractions.c
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
  int m, n;
  
  printf("%%d/%%d   ");
  int result = scanf("%d/%d", &m, &n);

  if ( result == 2 ) {
    printf("Match!\n");
  }

  printf("%%d /%%d    ");
  result = scanf("%d /%d", &m, &n);

  if ( result == 2 ) {
    printf("Match!\n");
  }

  exit(EXIT_SUCCESS);
}
