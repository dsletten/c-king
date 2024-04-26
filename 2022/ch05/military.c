/*
 *
 *   File:
 *      military.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      221122  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Enter a 24-hour time: ");

  int hours, minutes;
  int count = scanf("%d:%d", &hours, &minutes);

  int h = hours;
  if ( count != 2 ) {
    fprintf(stderr, "Invalid input.\n");
    exit(EXIT_FAILURE);
  } else if ( hours < 0  ||  hours > 23  ||  minutes < 0  || minutes > 59 ) {
    fprintf(stderr, "Bad time: %d:%d\n", hours, minutes);
    exit(EXIT_FAILURE);
  } else if ( hours == 0 ) {
    h = 12;
  } else if ( hours > 12 ) {
    h = hours - 12;
  }

  printf("Equivalent 12-hour time: %d:%.2d %s\n", h, minutes, hours < 12 ? "AM" : "PM");

  exit(EXIT_SUCCESS);
}
