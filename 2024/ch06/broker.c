/*
 *
 *   File:
 *      broker.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240613  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "read_num.h"

#define MINIMUM_COMMISSION 39.0

int main(void) {
  while ( true ) {
    double value = read_double_min_max("Enter value of trade: ", 0, 10000000);

    if ( value == 0 ) {
      exit(EXIT_SUCCESS);
    } else {
      double commission;

      if ( value < 2500 ) {
        commission = 30 + 0.017 * value;
      } else if ( value < 6250 ) {
        commission = 56 + 0.0066 * value;
      } else if ( value < 20000 ) {
        commission = 76 + 0.0034 * value;
      } else if ( value < 50000 ) {
        commission = 100 + 0.0022 * value;
      } else if ( value < 500000 ) {
        commission = 155 + 0.0011 * value;
      } else {
        commission = 255 + 0.0009 * value;
      }

      if ( commission < MINIMUM_COMMISSION ) {
        commission = MINIMUM_COMMISSION;
      }

      printf("Commission: $%.2f\n\n", commission);
    }
  }
}
