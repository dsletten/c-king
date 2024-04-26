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
 *      200104  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

double get_wind_speed(double min, double max) {
  double wind_speed;
  printf("Enter wind speed (knots): ");
  scanf("%lf", &wind_speed);

  if ( wind_speed >= min  &&  wind_speed <= max ) {
    return wind_speed;
  } else {
    return get_wind_speed(min, max);
  }
}

void print_beaufort_rating(double wind_speed) {
  if ( wind_speed < 1 ) {
    printf("Calm");
  } else if ( wind_speed <= 3 ) {
    printf("Light air");
  } else if ( wind_speed <= 27 ) {
    printf("Breeze");
  } else if ( wind_speed <= 47 ) {
    printf("Gale");
  } else if ( wind_speed <= 63 ) {
    printf("Storm");
  } else {
    printf("Hurricane");
  }
}

int main(void) {
  double wind_speed = get_wind_speed(0, 300);
  printf("A wind speed of %.2f knots has a Beaufort scale rating of: ", wind_speed);
  print_beaufort_rating(wind_speed);
  printf("\n");

  exit(EXIT_SUCCESS);
}
