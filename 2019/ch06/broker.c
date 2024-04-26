/*
 *
 *   File:
 *      broker.c
 *
 *   Synopsis:
 *      Modified King's broker.c from ch. 5.
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200104  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MINIMUM_COMMISSION 39.0
#define MAX_SHARES 1000000

double get_value();
double get_commission(double value);
double compute_commission(double base, double rate, double value);

int main(void) {
  while ( true ) {
    double value = get_value();
    
    if ( value == 0 ) {
      break;
    } else {
      double commission = get_commission(value);

      if ( commission < MINIMUM_COMMISSION ) {
	commission = MINIMUM_COMMISSION;
      }
  
      printf("Commission: $%.2f\n\n", commission);
    }
  }

  exit(EXIT_SUCCESS);
}

double get_value() {
  double value;

  printf("Enter value of trade: ");
  int count = scanf("%lf", &value);

  if ( count != 1 ) {
    while ( getchar() != '\n' );
    return get_value();
  } else if ( value < 0 ) {
    return get_value();
  } else {
    return value;
  }
}

double get_commission(double value) {
  if ( value < 2500 ) {
    return compute_commission(30, 0.017, value);
  } else if ( value < 6250 ) {
    return compute_commission(56, 0.0066, value);
  } else if ( value < 20000 ) {
    return compute_commission(76, 0.0034, value);
  } else if ( value < 50000 ) {
    return compute_commission(100, 0.0022, value);
  } else if ( value < 500000 ) {
    return compute_commission(155, 0.0011, value);
  } else {
    return compute_commission(255, 0.0009, value);
  }
}

double compute_commission(double base, double rate, double value) {
  return base + rate * value;
}
