/*
 *
 *   File:
 *      receipt.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      220905  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define FIELD_WIDTH 15

int main(void) {
  printf("Enter item number: ");
  int item;
  scanf("%d", &item);

  printf("Enter unit price: ");
  double price;
  scanf("%lf", &price);

  printf("Enter purchase date (mm/dd/yy): ");
  int month, day, year;
  scanf("%d/%d/%d", &month, &day, &year);

  printf("\n");

  char price_field[FIELD_WIDTH+1];
  char date_field[FIELD_WIDTH+1];
  sprintf(price_field, "$%7.2f", price);
  sprintf(date_field, "%.2d/%.2d/%.2d", month, day, year);
  printf("%-*s%-*s%-*s\n", FIELD_WIDTH, "Item", FIELD_WIDTH, "Unit", FIELD_WIDTH, "Purchase");
  printf("%-*s%-*s%-*s\n", FIELD_WIDTH, "", FIELD_WIDTH, "Price", FIELD_WIDTH, "Date");
  printf("%-*d%-*s%-*s\n", FIELD_WIDTH, item, FIELD_WIDTH, price_field, FIELD_WIDTH, date_field); 

  exit(EXIT_SUCCESS);
}
