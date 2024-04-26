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
 *      190729  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int month = 0, day = 0, year = 0;

  printf("Enter a date (mm/dd/yy): ");
  int result = scanf("%d/%d/%d", &month, &day, &year);

  printf("scanf returned: %d\n", result);
  printf("You entered the date %.2d%.2d%.2d\n", year, month, day);
  
  printf("Enter a strict date (mm/dd/yy): ");
  result = scanf("%2d/%2d/%4d", &month, &day, &year);

  printf("scanf returned: %d\n", result);
  printf("You entered the date %.2d%.2d%.2d\n", year, month, day);
  
  exit(EXIT_SUCCESS);
}
