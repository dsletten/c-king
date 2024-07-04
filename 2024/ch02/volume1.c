/*
 *
 *   File:
 *      volume1.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      240427  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double get_radius();

int main(void) {
  double radius = get_radius();
  double volume = (4.0/3.0) * M_PI * pow(radius, 3);

  printf("The volume of a sphere of radius %.1f is %.3f\n", radius, volume);
  
  exit(EXIT_SUCCESS);
}

double get_radius() {
  double r;
  printf("Enter radius: ");
  scanf("%lf", &r);

  if ( r < 0 ) {
    return get_radius();
  } else {
    return r;
  }
}
