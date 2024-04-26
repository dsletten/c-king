/*
 *
 *   File:
 *      broker.c
 *
 *   Synopsis:
 *      Ex. 6.4
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200101  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MINIMUM_COMMISSION 39.0

double calculate_commission(double base, double rate, double value);

int main(void) {
  double commission, value;
  
  while ( true ) {
    printf("Enter value of trade: ");
    scanf("%lf", &value);

    if ( value == 0 ) {
      exit(EXIT_SUCCESS);
    } else if ( value < 0 ) {
      printf("Are you stupid?!\n");
      exit(EXIT_FAILURE);
    } else if ( value < 2500 ) {
      commission = calculate_commission(30, 0.017, value);
    } else if ( value < 6250 ) {
      commission = calculate_commission(56, 0.0066, value);
    } else if ( value < 20000 ) {
      commission = calculate_commission(76, 0.0034, value);
    } else if ( value < 50000 ) {
      commission = calculate_commission(100, 0.0022, value);
    } else if ( value < 500000 ) {
      commission = calculate_commission(155, 0.0011, value);
    } else {
      commission = calculate_commission(255, 0.0009, value);
    }

    if ( commission < MINIMUM_COMMISSION ) {
      commission = MINIMUM_COMMISSION;
    }

    printf("Commission: $%.2f\n\n", commission);
  }
}

double calculate_commission(double base, double rate, double value) {
  return base + rate * value;
}
