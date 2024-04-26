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
 *      210901  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Enter a two-digit number: ");

  int n;
  //  int count = scanf("%2d", &n); // This doesn't enforce 2 digits. In fact, it gets in the way of detecting > 2 digits...
  int count = scanf("%d", &n);

  if ( count != 1  ||  n < 10  ||  n > 99 ) {
    printf("Get with the program!\n");
  } else {
    int units = n % 10;
    int tens = n / 10;

    printf("The reversal is: %d\n", units * 10 + tens);
  }

  exit(EXIT_SUCCESS);
}
