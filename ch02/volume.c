/*
 *
 *   File:
 *      volume.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      190725  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592653589793

int main(void) {
  double radius;
  printf("Enter radius: ");
  scanf("%lf", &radius);

  double volume = (4.0/3.0) * PI * radius * radius * radius;

  printf("Volume of sphere with radius %f: %f\n", radius, volume);
  
  exit(EXIT_SUCCESS);
}
