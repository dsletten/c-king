/*
 *
 *   File:
 *      calendar.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      211019  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Enter number of days in month: ");
  int days;
  int count = scanf("%d", &days);

  printf("Enter starting day of the week (1=Sun, 7=Say): ");
  int start;
  count = scanf("%d", &start);

  for (int day_of_month = 1, day_of_week = 1; day_of_month <= days; day_of_week++) {
    if ( day_of_week < start ) {
      printf("%3s", " ");
    } else {
      printf("%2d ", day_of_month);
      day_of_month++;
    }

    if ( day_of_week % 7 == 0 ) {
      printf("\n");
    }
  }

  printf("\n");
  
  exit(EXIT_SUCCESS);
}
