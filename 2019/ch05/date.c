/*
 *
 *   File:
 *      date.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200103  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

void print_ordinal(int n) {
  switch ( n ) {
    case 1: case 21: case 31: 
      printf("st");
      return;
    case 2: case 22:
      printf("nd");
      return;
    case 3: case 23:
      printf("rd");
      return;
    default:
      printf("th");
      return;
  }
}

void print_month(int month) {
  switch ( month ) {
    case 1:
      printf("January");
      return;
    case 2:
      printf("February");
      return;
    case 3:
      printf("March");
      return;
    case 4:
      printf("April");
      return;
    case 5:
      printf("May");
      return;
    case 6:
      printf("June");
      return;
    case 7:
      printf("July");
      return;
    case 8:
      printf("August");
      return;
    case 9:
      printf("September");
      return;
    case 10:
      printf("October");
      return;
    case 11:
      printf("November");
      return;
    case 12:
      printf("December");
      return;
  }
}
                              
int main(void) {
  int month, day, year;

  printf("Enter date (mm/dd/yyyy): ");
  scanf("%2d /%2d /%4d", &month, &day, &year);

  printf("Dated this %d", day);
  print_ordinal(day);
  printf(" day of ");
  print_month(month);
  printf(", %4d.\n", year);

  exit(EXIT_SUCCESS);
}
