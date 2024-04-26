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
 *      221229  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define DAYS_PER_WEEK 7

int main(void) {
  printf("Enter number of days in month: ");
  int days;
  scanf("%d", &days);

  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  int dow;
  scanf("%d", &dow);

  for (int i = 1; i < dow; i++) {
    printf("   ");
  }

  for (int day = 1; day <= days; day++) {
    printf("%2d ", day);

    if ( (day + dow - 1) % DAYS_PER_WEEK == 0 ) {
      printf("\n");
    }
  }

  printf("\n");

  exit(EXIT_SUCCESS);
}
