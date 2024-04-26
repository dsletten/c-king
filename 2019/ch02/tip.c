/*
 *
 *   File:
 *      tip.c
 *
 *   Synopsis:
 *       Compute a 20% tip.
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      190725  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define TIP_RATE 20.0

int main(void) {
  double price;

  printf("Enter a dollar amount: ");
  scanf("%lf", &price);

  double tip = (TIP_RATE/100.0) * price;

  printf("Price: %f Tip: %f Total: %f\n", price, tip, price + tip);

  exit(EXIT_SUCCESS);
}
