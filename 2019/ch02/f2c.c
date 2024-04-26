/*
 *
 *   File:
 *      f2c.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      190723  Original.
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define FREEZING_POINT 32.0
#define SCALE_FACTOR (5.0 / 9.0)

int main(void) {
  double fahrenheit, celsius;
  //  float fahrenheit, celsius;

  printf("Enter Fahrenheit temperature: ");
  scanf("%lf", &fahrenheit);
  //  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;

  printf("Celsius equivalent: %.1f\n", celsius);
  
  exit(EXIT_SUCCESS);
}
