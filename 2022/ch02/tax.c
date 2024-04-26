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
 *      220901  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define TAX_RATE 0.05

int main(void) {
  double price;
  printf("Enter a dollar amount: $");
  scanf("%lf", &price);

  double total_price = price + price * TAX_RATE;
  printf("With tax added: $%.2f\n", total_price);

  exit(EXIT_SUCCESS);
}
