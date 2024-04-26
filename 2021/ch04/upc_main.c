/*
 *
 *   File:
 *      upc_main.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      210827  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "upc.h"

void check_count(int actual, int expected);

int main(void) {
  int upc[12];
  int count;

  printf("Enter product type: ");
  count = scanf("%1d", &upc[0]);
  check_count(count, 1);

  printf("Enter manufacturer's code: ");
  count = scanf("%1d%1d%1d%1d%1d", &upc[1], &upc[2], &upc[3], &upc[4], &upc[5]);
  check_count(count, 5);

  printf("Enter product code: ");
  count = scanf("%1d%1d%1d%1d%1d", &upc[6], &upc[7], &upc[8], &upc[9], &upc[10]);
  check_count(count, 5);

  printf("Enter check digit: ");
  count = scanf("%1d", &upc[11]);
  check_count(count, 1);

  bool valid = validate_check_digit(upc);

  if ( valid ) {
    printf("Valid UPC.\n");
  } else {
    printf("Invalid UPC.\n");
  }

  exit(EXIT_SUCCESS);
}

void check_count(int actual, int expected) {
  if ( actual != expected ) {
    exit(EXIT_FAILURE);
  }
}
