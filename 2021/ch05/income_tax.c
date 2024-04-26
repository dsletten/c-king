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
 *      211009  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_INCOME 1e9

double read_income(char *prompt);
double compute_tax(double income);

int main(void) {
  double income = read_income("Enter taxable income: ");
  double tax = compute_tax(income);

  printf("The tax due is $%.2lf\n", tax);

  exit(EXIT_SUCCESS);
}

double read_income(char *prompt) {
  printf("%s", prompt);

  double income;
  int count = scanf("%lf", &income);

  if ( count != 1 ) {
    while ( getchar() != '\n' );
    return read_income(prompt);
  } else if ( income < 0  ||  income > MAX_INCOME ) {
    return read_income(prompt);
  } else {
    return income;
  }
}

double compute_tax(double income) {
  if ( income < 750 ) {
    return income * 0.01;
  } else if ( income < 2250 ) {
    return 7.5 + (income - 750) * 0.02;
  } else if ( income < 3750 ) {
    return 37.5 + (income - 2250) * 0.03;
  } else if ( income < 5250 ) {
    return 82.5 + (income - 3750) * 0.04;
  } else if ( income < 7000 ) {
    return 142.5 + (income - 5250) * 0.05;
  } else {
    return 230 + (income - 7000) * 0.06;
  }
}
