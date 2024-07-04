/*
 *
 *   File:
 *      tax.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240427  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define TAX_RATE 0.05

int main(void) {
  double amount;
  printf("Enter a dollar amount: ");
  scanf("%lf", &amount);

  printf("With tax added: %.2f\n", amount * (1.0 + TAX_RATE));

  exit(EXIT_SUCCESS);
}
