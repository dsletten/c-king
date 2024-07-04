/*
 *
 *   File:
 *      purchase.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240503  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

void bail();

int main(void) {
  int item, result;
  printf("Enter item number: ");
  result = scanf("%d", &item);

  if ( result != 1 ) {
    bail();
  }
  
  double price;
  printf("Enter unit price: ");
  result = scanf("%lf", &price);

  if ( result != 1 ) {
    bail();
  }
  
  int month, day, year;
  printf("Enter purchase date (mm/dd/yy): ");
  result = scanf("%2d/%2d/%2d", &month, &day, &year);

  if ( result != 3 ) {
    bail();
  }

  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%d\t\t$%7.2f\t%.2d/%.2d/%.2d\n", item, price, month, day, year);
  
  exit(EXIT_SUCCESS);
}

void bail() {
  fprintf(stderr, "Not this time, buddy!\n");
  exit(EXIT_FAILURE);
}
