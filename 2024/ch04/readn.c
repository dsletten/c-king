/*
 *
 *   File:
 *      readn.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240509  Original.
 *
 */
#include "readn.h"
#include <math.h>
#include <stdio.h>

int readn(char* prompt, int n) {
  printf("Enter a %s number: ", prompt);

  int m;
  int count = scanf("%d", &m);

  if ( count == 1  &&  pow(10, n - 1) <= m  &&  m <= pow(10, n) - 1 ) {
    return m;
  } else {
    while ( getchar() != '\n' );
    return readn(prompt, n);
  }
}
