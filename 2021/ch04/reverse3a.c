/*
 *
 *   File:
 *      reverse3a.c
 *
 *   Synopsis:
 *      Ex. 5
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      210901  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Enter a three-digit number: ");

  int hundreds, tens, units;
  int count = scanf("%1d%1d%1d", &hundreds, &tens, &units);

  if ( count != 3  ||  hundreds == 0  ) {
    printf("Get with the program!\n");
  } else {

    printf("The reversal is: %d%d%d\n", units, tens, hundreds);
  }

  exit(EXIT_SUCCESS);
}
