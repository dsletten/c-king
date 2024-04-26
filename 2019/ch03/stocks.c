/*
 *
 *   File:
 *      stocks.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      190728  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int price, shares;
  //  float numerator, denominator, value;
  int numerator, denominator;
  double value;

  printf("Enter share price (must include a fraction): ");
  //  scanf("%d%f/%f", &price, &numerator, &denominator);
  scanf("%d%d/%d", &price, &numerator, &denominator);

  printf("Enter number of shares: ");
  scanf("%d", &shares);

  //  value = (price + numerator / denominator) * shares;
  value = (price + (double) numerator / denominator) * shares;

  //  printf("Value of holdings: $%.2f\n", value);
  printf("Value of holdings: $%.2lf\n", value);  
  
  exit(EXIT_SUCCESS);
}
