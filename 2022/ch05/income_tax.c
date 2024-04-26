/*
 *
 *   File:
 *      income_tax.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      221125  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

double compute_tax(double income) {
  if ( income <= 750 ) {
    return 0.01 * income;
  } else if ( income <= 2250 ) {
    return 7.50 + 0.02 * (income - 750);
  } else if ( income <= 3750 ) {
    return 37.50 + 0.03 * (income - 2250);
  } else if ( income <= 5250 ) {
    return 82.50 + 0.04 * (income - 3750);
  } else if ( income <= 7000 ) {
    return 142.50 + 0.05 * (income - 5250);
  } else {
    return 230.00 + 0.06 * (income - 7000);
  }
}

int main(void) {
  printf("Enter income: ");
  double income;
  scanf("%lf", &income);

  printf("Tax due: %.2lf\n", compute_tax(income));
  
  exit(EXIT_SUCCESS);
}
