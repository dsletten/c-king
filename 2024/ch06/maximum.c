/*
 *
 *   File:
 *      maximum.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240609  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "read_num.h"

int main(void) {
  double max = 0;

  double x;
  do {
    x = read_double("Enter a number: ");
    
    if ( max < x ) {
      max = x;
    }
  } while ( x > 0 );

  printf("The largest number entered was %.2f\n", max);
  
  exit(EXIT_SUCCESS);
}
