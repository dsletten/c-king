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
 *      221228  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MINIMUM_COMMISSION 39.0

double compute(int base, double rate, double value);
double calculate_commission(double value);
double get_commission(double value);

int main(void) {
  while ( true ) {
    printf("Enter number of shares: ");
    int shares;
    scanf("%d", &shares);

    if ( shares == 0 ) {
      exit(EXIT_SUCCESS);
    } else {
      printf("Enter price per share: ");
      double share_price;
      scanf("%lf", &share_price);
      
      double value = shares * share_price;
      
      if ( value < 0 ) {
        printf("Are you stupid?!\n");
      } else {
        double commission = get_commission(value);
        printf("Commission: $%.2f\n", commission);
      }
    }
  }
}

double compute(int base, double rate, double value) {
  return base + rate * value;
}

double calculate_commission(double value) {
  if ( value < 2500 ) {
    return compute(30, 0.017, value);
  } else if ( value < 6250 ) {
    return compute(56, 0.0066, value);
  } else if ( value < 20000 ) {
    return compute(76, 0.0034, value);
  } else if ( value < 50000 ) {
    return compute(100, 0.0022, value);
  } else if ( value < 500000 ) {
    return compute(155, 0.0011, value);
  } else {
    return compute(255, 0.0009, value);
  }
}

double get_commission(double value) {
  double commission = calculate_commission(value);

  if ( commission < MINIMUM_COMMISSION ) {
    return MINIMUM_COMMISSION;
  } else {
    return commission;
  }
}
