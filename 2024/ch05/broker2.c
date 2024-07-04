/*
 *
 *   File:
 *      broker2.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240519  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "read_num.h"

#define MINIMUM_COMMISSION 39.0

double calculate_commission(int shares, double share_price);
double calculate_rival_commission(int shares);

int main(void) {
  int shares = read_int("Enter number of shares traded: ", 0, 100000);
  double share_price = read_double("Enter share price: ", 0, 10000);

  double commission = calculate_commission(shares, share_price);
  double rival_commission = calculate_rival_commission(shares);

  printf("Commission: $%.2f\n", commission);
  printf("Competitor: $%.2f\n", rival_commission);

  exit(EXIT_SUCCESS);
}

double calculate_commission(int shares, double share_price) {
  double value = shares * share_price;

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

  return commission;
}

double calculate_rival_commission(int shares) {
  double base_commission = 33;

  if ( shares < 2000 ) {
    return base_commission + 0.03 * shares;
  } else {
    return base_commission + 0.02 * shares;
  }
}
