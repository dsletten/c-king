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
 *      211006  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Enter a 24-hour time: ");
  int hours, minutes;
  int count = scanf("%d:%d", &hours, &minutes);

  if ( count != 2 ) {
    printf("What are you thinking?\n");
    exit(EXIT_FAILURE);
  } else {
    int civ_hours = ((hours + 11) % 12) + 1;
    printf("Equivalent 12-hour time: %d:%.2d ", civ_hours, minutes);
    
    if ( hours >= 12 ) {
      printf("PM\n");
    } else {
      printf("AM\n");
    }

    exit(EXIT_SUCCESS);
  }
}
