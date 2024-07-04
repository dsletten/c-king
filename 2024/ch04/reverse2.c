/*
 *
 *   File:
 *      reverse2.c
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

/* int read2(); */

int main(void) {
  /* int n = read2(); */

  int n = readn("two-digit", 2);

  printf("The reversal is: %d%d\n", n % 10, n / 10);

  exit(EXIT_SUCCESS);
}

/* int read2() { */
/*   printf("Enter a two-digit number: "); */

/*   int n; */
/*   int count = scanf("%d", &n); */

/*   if ( count == 1  &&  10 <= n  &&  n <= 99 ) { */
/*     return n; */
/*   } else { */
/*     return read2(); */
/*   } */
/* } */
