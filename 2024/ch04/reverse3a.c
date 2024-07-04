/*
 *
 *   File:
 *      reverse3a.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240510  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

void read3(int* h, int* t, int* o);

int main(void) {
  int hundreds, tens, ones;
  read3(&hundreds, &tens, &ones);

  printf("The reversal is: %d%d%d\n", ones, tens, hundreds);

  exit(EXIT_SUCCESS);
}

void read3(int* h, int* t, int* o) {
  printf("Enter a three-digit number: ");

  int count = scanf("%1d%1d%1d", h, t, o);

  if ( count == 3  &&  *h != 0 ) {
    return;
  } else {
    while ( getchar() != '\n' );  // Not bulletproof!
    read3(h, t, o);
  }
}
