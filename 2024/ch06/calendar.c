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
 *      240617  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "read_num.h"

int main(void) {
  int days = read_int_min_max("Enter number of days in month: ", 1, 31);
  int start_day = read_int_min_max("Enter starting day of the week (1=Sun, 7=Sat): ", 1, 7);

  int index = 1;
  for (int i = 1; i <= days; index++) {
    if ( index < start_day ) {
      printf("%2s", " ");
    } else {
      printf("%2d", i++);
    }

    if ( index % 7 == 0 ) {
      printf("\n");
    } else {
      printf(" ");
    }
  }

  if ( index % 7 != 1 ) {
    printf("\n");
  }

  exit(EXIT_SUCCESS);
}
