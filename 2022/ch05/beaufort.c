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
 *      221125  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Enter wind speed (knots): ");
  int speed;

  int count = scanf("%d", &speed);

  if ( count != 1 ) {
    fprintf(stderr, "Fatal error!\n");
    exit(EXIT_FAILURE);
  } else if ( speed < 0 ) {
    fprintf(stderr, "You are so dumb...\n");
    exit(EXIT_FAILURE);
  } else {
    if ( speed < 1 ) {
      printf("Calm\n");
    } else if ( speed <= 3 ) {
      printf("Light air\n");
    } else if ( speed <= 27 ) {
      printf("Breeze\n");
    } else if ( speed <= 47 ) {
      printf("Gale\n");
    } else if ( speed <= 63 ) {
      printf("Storm\n");
    } else {
      printf("Hurricane\n");
    }

    exit(EXIT_SUCCESS);
  }
}
