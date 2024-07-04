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
 *      240427  Original.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  double radius = 10;
  double volume = (4.0/3.0) * M_PI * radius * radius * radius;

  printf("The volume of a sphere of radius %.1f is %.1f\n", radius, volume);
  
  exit(EXIT_SUCCESS);
}
