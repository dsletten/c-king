/*
 *
 *   File:
 *      income_tax.c
 *
 *   Synopsis:
 *      Ripped off from King's JPB ch. 4!
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200104  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

double get_income() {
  double income;
  printf("Enter taxable income: ");
  scanf("%lf", &income);
  
  return income;
}

double compute_income_tax(double income) {
  if ( income <= 750 ) {
    return income * 0.01;
  } else if ( income <= 2250 ) {
    return 7.5 + (income - 750) * 0.02;
  } else if ( income <= 3750 ) {
    return 37.5 + (income - 2250) * 0.03;
  } else if ( income <= 5250 ) {
    return 82.5 + (income - 3750) * 0.04;
  } else if ( income <= 7000 ) {
    return 142.5 + (income - 5250) * 0.05;
  } else {
    return 230.0 + (income - 7000) * 0.06;
  }
}

int main(void) {
  double income = get_income();
  double income_tax = compute_income_tax(income);

  printf("Tax due on a taxable income of %.2f is %.2f\n", income, income_tax);

  exit(EXIT_SUCCESS);
}
