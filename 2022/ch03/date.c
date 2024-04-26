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
 *      220905  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Enter a date (mm/dd/yy): ");
  
  int month, day, year;

  int count = scanf("%d/%d/%d", &month, &day, &year);

  if ( count != 3 ) {
    fprintf(stderr, "Nice try clown.\n");
    exit(EXIT_FAILURE);
  } else {
    printf("You entered the date %.2d%.2d%.2d\n", year, month, day);
    exit(EXIT_SUCCESS);
  }
}
