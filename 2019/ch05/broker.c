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
 *      200101  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define MINIMUM_COMMISSION 39.0

double calculate_commission(double base, double rate, double value) {
  return base + rate * value;
}

int main(void) {
  double commission, value;
  
  printf("Enter value of trade: ");
  scanf("%lf", &value);

  if ( value < 0 ) {
    printf("Are you stupid?!\n");
    exit(EXIT_FAILURE);
  } else if ( value < 2500 ) {
    //   commission = 30 + 0.017 * value;
    commission = calculate_commission(30, 0.017, value);
  } else if ( value < 6250 ) {
    //    commission = 56 + 0.0066 * value;
    commission = calculate_commission(56, 0.0066, value);
  } else if ( value < 20000 ) {
    //    commission = 76 + 0.0034 * value;
    commission = calculate_commission(76, 0.0034, value);
  } else if ( value < 50000 ) {
    //    commission = 100 + 0.0022 * value;
    commission = calculate_commission(100, 0.0022, value);
  } else if ( value < 500000 ) {
    //    commission = 155 + 0.0011 * value;
    commission = calculate_commission(155, 0.0011, value);
  } else {
    //    commission = 255 + 0.0009 * value;
    commission = calculate_commission(255, 0.0009, value);
  }

  if ( commission < MINIMUM_COMMISSION ) {
    commission = MINIMUM_COMMISSION;
  }

  printf("Commission: $%.2f\n", commission);

  exit(EXIT_SUCCESS);
}
