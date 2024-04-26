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
 *      211008  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double speed;
  printf("Enter wind speed (knots): ");
  int count = scanf("%lf", &speed);

  if ( count != 1  ||  speed < 0 ) {
    printf("What's up with you?\n");
    exit(EXIT_FAILURE);
  } else {
    printf("On the Beaufort scale, a wind speed of %.2lf knots is: ", speed);

    if ( speed < 1 ) {
      printf("Calm");
    } else if ( speed < 4 ) {
      printf("Light air");
    } else if ( speed < 28 ) {
      printf("Breeze");
    } else if ( speed < 48 ) {
      printf("Gale");
    } else if ( speed <= 63 ) {
      printf("Storm");
    } else {
      printf("Hurricane");
    }

    printf(".\n");
      
    exit(EXIT_SUCCESS);
  }
}
