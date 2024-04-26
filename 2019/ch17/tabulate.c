/*
 *
 *   File:
 *      tabulate.c
 *
 *   Synopsis:
 *
 *   Revision History:
 *      Date    Change Description
 *      ------  -----------------------------------------
 *      200705  Original.
 *
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void tabulate(double (*f)(double), double initial, double final, double inc);

int main(void) {
  double initial, final, increment;

  printf("Enter initial value: ");
  scanf("%lf", &initial);

  printf("Enter final value: ");
  scanf("%lf", &final);

  printf("Enter increment: ");
  scanf("%lf", &increment);

  printf("\n");
  printf("      x        cos(x)\n");
  printf("   -------    -------\n");
  tabulate(cos, initial, final, increment);

  printf("\n");
  printf("      x        sin(x)\n");
  printf("   -------    -------\n");
  tabulate(sin, initial, final, increment);

  printf("\n");
  printf("      x        tan(x)\n");
  printf("   -------    -------\n");
  tabulate(tan, initial, final, increment);

  exit(EXIT_SUCCESS);
}

void tabulate(double (*f)(double), double initial, double final, double inc) {
  double x;
  int intervals = ceil((final - initial) / inc);

  for (int i = 0; i <= intervals; i++) {
    x = initial + i * inc;
    printf("%10.5f %10.5f\n", x, (*f)(x));
  }
}
