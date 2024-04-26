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
 *      210901  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Enter a three-digit number: ");

  int n;
  int count = scanf("%d", &n);

  if ( count != 1  ||  n < 100  ||  n > 999 ) {
    printf("Get with the program!\n");
  } else {
    int units = n % 10;
    int tens = n / 10 % 10;
    int hundreds = n / 100;

    printf("The reversal is: %d\n", units * 100 + tens * 10 + hundreds);
  }

  exit(EXIT_SUCCESS);
}
