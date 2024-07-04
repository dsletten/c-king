/*
 *
 *   File:
 *      beaufort.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240521  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "read_num.h"

int main(void) {
  double wind_speed = read_double("Enter wind speed (knots): ", 0, 1000);

  if ( wind_speed < 1 ) {
    printf("Calm\n");
  } else if ( wind_speed < 4 ) {
    printf("Light air\n");
  } else if ( wind_speed < 28 ) {
    printf("Breeze\n");
  } else if ( wind_speed < 48 ) {
    printf("Gale\n");
  } else if ( wind_speed <= 63  ) {
    printf("Storm\n");
  } else {
    printf("Hurricane\n");
  }

  exit(EXIT_SUCCESS);
}
