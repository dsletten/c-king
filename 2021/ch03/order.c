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
 *      210825  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int item_number;
  printf("Enter item number: ");
  int count = scanf("%d", &item_number);

  if ( count == 1 ) {
    double unit_price;
    printf("Enter unit price: ");
    count = scanf("%lf", &unit_price);

    if ( count == 1 ) {
      printf("Enter purchase date (mm/dd/yy): ");
      int month, day, year;
      count = scanf("%2d/%2d/%2d", &month, &day, &year);

      if ( count == 3 ) {
        printf("\n");
        printf("%-20s%-20s%-20s\n", "Item", "Unit", "Purchase");
        printf("%-20s%-20s%-20s\n", " ", "Price", "Date");
        printf("%-20d$%7.2f%12s%.2d/%.2d/%.2d\n", item_number, unit_price, " ", month, day, year);

        exit(EXIT_SUCCESS);
      }
    }
  }

  printf("You don't follow directions well.\n");
  exit(EXIT_FAILURE);
}
