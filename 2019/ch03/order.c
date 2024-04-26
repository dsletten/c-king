/*
 *
 *   File:
 *      order.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      190730  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int item_number = 0;
  float unit_price = 0.0;
  int month = 0, day = 0, year = 0;

  printf("Enter item number: ");
  scanf("%d", &item_number);

  printf("Enter unit price: ");
  scanf("%f", &unit_price);

  printf("Enter purchase date (mm/dd/yy): ");
  int result = scanf("%d/%d/%d", &month, &day, &year);

  if ( result != 3 ) {
    printf("Uffda!\n");
  }

  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\t\tPrice\t\tDate\n");
  printf("%-6d\t\t$%7.2f\t%.2d/%.2d/%.2d\n", item_number, unit_price, month, day, year);
  
  exit(EXIT_SUCCESS);
}
