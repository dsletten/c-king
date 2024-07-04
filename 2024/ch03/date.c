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
 *      240503  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int month, day, year;
  printf("Enter a date (mm/dd/yy): ");
  int result = scanf("%2d/%2d/%2d", &month, &day, &year);

  if ( result != 3 ) {
    fprintf(stderr, "Trying to suck, eh?\n");
    exit(EXIT_FAILURE);
  } else {
    printf("You entered the date %.2d%.2d%.2d\n", year, month, day);
    exit(EXIT_SUCCESS);
  }
}
