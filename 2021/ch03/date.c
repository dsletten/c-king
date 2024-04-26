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
 *      210822  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Enter a date (mm/dd/yy): ");

  int month, day, year;
  int count = scanf("%2d/%2d/%2d", &month, &day, &year);

  if ( count == 3 ) {
    printf("You entered the date %.2d%.2d%.2d\n", year, month, day);
  } else {
    printf("Try again loser!\n");
  }

  exit(EXIT_SUCCESS);
}
