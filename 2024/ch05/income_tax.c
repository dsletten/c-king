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
 *      240521  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "read_num.h"

double tax_table(double income);

int main(void) {
  double income = read_double("Enter taxable income: ", 0, 1000000);
  double tax = tax_table(income);

  printf("Tax due for a taxable income of $%.2f is $%.2f\n", income, tax);
  
  exit(EXIT_SUCCESS);
}

double tax_table(double income) {
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
