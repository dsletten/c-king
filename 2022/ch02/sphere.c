/*
 *
 *   File:
 *      sphere.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      220901  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  double radius;
  printf("Enter radius of sphere: ");
  scanf("%lf", &radius);
  
  //  double volume = (4.0/3.0) * M_PI * radius * radius * radius;
  double volume = (4.0/3.0) * M_PI * pow(radius, 3);
  printf("The volume of a sphere of radius %.1f is %.1f.\n", radius, volume);

  exit(EXIT_SUCCESS);
}
