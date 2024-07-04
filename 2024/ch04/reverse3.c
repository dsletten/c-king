/*
 *
 *   File:
 *      reverse3.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240509  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "readn.h"

/* int read3(); */

int main(void) {
  /* int n = read3(); */

  int n = readn("three-digit", 3);

  int n_q = n / 10;
  int n_r = n % 10;

  printf("The reversal is: %d%d%d\n", n_r, n_q % 10, n_q / 10);

  exit(EXIT_SUCCESS);
}

/* int read3() { */
/*   printf("Enter a three-digit number: "); */

/*   int n; */
/*   int count = scanf("%d", &n); */

/*   if ( count == 1  &&  100 <= n  &&  n <= 999 ) { */
/*     return n; */
/*   } else { */
/*     return read3(); */
/*   } */
/* } */
